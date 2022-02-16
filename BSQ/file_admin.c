/* ************************************************************************** */
/*                                                                            */
/*                                                          :::      :::::::: */
/* file_admin.c                                           :+:      :+:    :+: */
/*                                                      +:+ +:+         +:+   */
/* By: aherrero <aherrero@student.42urduliz.com>      +#+  +:+       +#+      */
/*                                                  +#+#+#+#+#+   +#+         */
/* Created: 2021/06/27 10:16:38 by aherrero              #+#    #+#           */
/* Updated: 2021/06/30 15:44:04 by aherrero             ###   ########.fr     */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"
#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>

int	count_bytes(char *filename)
{
	char	*str;
	int		fd;
	int		x;
	int		n;

	x = 0;
	n = 0;
	while (n == x)
	{
		n++;
		fd = open(filename, O_RDONLY);
		str = malloc(sizeof(char) * n);
		if (str == NULL)
			return (0);
		x = read(fd, str, n);
		close(fd);
	}
	free(str);
	return (x);
}

char	*readfile(char *name, int len)
{
	char	*str;
	int		fd;
	int		ret;

	len = count_bytes(name);
	str = malloc(sizeof(char) * len);
	if (str == NULL)
		return (NULL);
	fd = open(name, O_RDONLY);
	ret = read(fd, str, len);
	close(fd);
	return (str);
}
