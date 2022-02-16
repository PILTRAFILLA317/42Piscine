/* ************************************************************************** */
/*                                                                            */
/*                                                          :::      :::::::: */
/* main.c                                                 :+:      :+:    :+: */
/*                                                      +:+ +:+         +:+   */
/* By: aherrero <aherrero@student.42urduliz.com>      +#+  +:+       +#+      */
/*                                                  +#+#+#+#+#+   +#+         */
/* Created: 2021/06/28 10:39:28 by aherrero              #+#    #+#           */
/* Updated: 2021/06/30 16:51:01 by aherrero             ###   ########.fr     */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include "header.h"

void	free_memory(struct s_base_map map)
{
	int	files;

	files = get_array_len(map.grid);
	while (files >= 0)
	{
		free(map.grid[files]);
		files--;
	}
	free(map.grid);
}

void	execute_bsq(char *name)
{
	char				*file;
	struct s_base_map	map;

	file = readfile(name, 0);
	if (valid_map(file) == 0)
		write(1, "map error\n", 10);
	else
	{
		map = set_default_map(file);
		resolve_map(map);
		free_memory(map);
		free(file);
	}
	write(1, "\n", 1);
}

int	main(int argc, char **argv)
{
	int	i;

	i = 1;
	if (argc < 2)
	{
		execute_bsq("map");
		return (0);
	}
	while (i < argc)
	{
		execute_bsq(argv[i]);
		i++;
	}
	return (0);
}
