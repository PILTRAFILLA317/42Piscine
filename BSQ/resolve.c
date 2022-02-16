/* ************************************************************************** */
/*                                                                            */
/*                                                          :::      :::::::: */
/* resolve.c                                              :+:      :+:    :+: */
/*                                                      +:+ +:+         +:+   */
/* By: aherrero <aherrero@student.42urduliz.com>      +#+  +:+       +#+      */
/*                                                  +#+#+#+#+#+   +#+         */
/* Created: 2021/06/29 11:31:44 by aherrero              #+#    #+#           */
/* Updated: 2021/06/30 12:16:45 by aherrero             ###   ########.fr     */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int	g_xmax;
int	g_ymax;

int	get_array_len(char **arr)
{
	int	i;

	i = 1;
	 while (arr[i])
		i++;
	return (i - 2);
}

int	get_pos(int *x, int *y, struct s_base_map map)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (j < map.area)
	{
		i = 0;
		while (i < map.area)
		{
			if (map.grid[j + *y][i + *x] != map.empty)
				return (0);
			i++;
		}
		j++;
	}
	*x = i - map.area + *x;
	*y = j - map.area + *y;
	return (1);
}

int	get_biggest_sq(struct s_base_map base, int *x, int *y)
{
	struct s_base_map	map;

	map = base;
	while (map.area <= g_xmax && map.area <= g_ymax)
	{
		while (*y + map.area < g_ymax)
		{
			*x = 0;
			while (*x + map.area < g_xmax)
			{
				if (get_pos(x, y, map))
				{
					return (1);
				}
				*x = *x + 1;
			}
			*y = *y + 1;
		}
		map.area++;
	}
	return (0);
}

struct s_base_map	replace(struct s_base_map base, int j, int i)
{
	struct s_base_map	map;
	int					replace_i;
	int					replace_j;

	map = base;
	replace_i = i;
	while (replace_i < map.area + i)
	{
		replace_j = j;
		while (replace_j < map.area + j)
		{
			map.grid[replace_i][replace_j] = map.full;
			replace_j++;
		}
		replace_i++;
	}
	return (map);
}

void	resolve_map(struct s_base_map base)
{
	struct s_base_map	map;
	int					i;
	int					j;

	map = base;
	g_xmax = ft_strlen(map.grid[1]);
	g_ymax = get_array_len(map.grid) + 1;
	i = 1;
	j = 0;
	map.area = g_xmax;
	while (map.area > 0)
	{
		if (get_biggest_sq(map, &j, &i))
		{
			map = replace(map, j, i);
			print_grid(map.grid);
			return ;
		}
		else
		{
			i = 1;
			j = 0;
			map.area--;
		}
	}
}
