/* ************************************************************************** */
/*                                                                            */
/*                                                          :::      :::::::: */
/* map_admin.c                                            :+:      :+:    :+: */
/*                                                      +:+ +:+         +:+   */
/* By: aherrero <aherrero@student.42urduliz.com>      +#+  +:+       +#+      */
/*                                                  +#+#+#+#+#+   +#+         */
/* Created: 2021/06/29 09:06:00 by aherrero              #+#    #+#           */
/* Updated: 2021/06/30 10:00:06 by aherrero             ###   ########.fr     */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"
#include <unistd.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

struct s_base_map	set_default_map(char *str)
{
	struct s_base_map	map;
	char				**grid;
	int					len;

	grid = split(str, '\n');
	map.area = 0;
	map.grid = grid;
	len = ft_strlen(grid[0]);
	map.full = grid[0][len - 1];
	map.obstacle = grid[0][len - 2];
	map.empty = grid[0][len - 3];
	return (map);
}

void	print_grid(char **grid)
{
	int	i;
	int	j;
	int	c;

	i = 1;
	c = get_array_len(grid);
	while (i <= c)
	{
		j = 0;
		while (grid[i][j] != '\0')
		{
			write(1, &grid[i][j], 1);
			j++;
		}
		write(1, "\n", 1);
		i++;
	}
}
