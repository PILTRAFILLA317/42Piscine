/* ************************************************************************** */
/*                                                                            */
/*                                                          :::      :::::::: */
/* utils.c                                                :+:      :+:    :+: */
/*                                                      +:+ +:+         +:+   */
/* By: aherrero <aherrero@student.42urduliz.com>      +#+  +:+       +#+      */
/*                                                  +#+#+#+#+#+   +#+         */
/* Created: 2021/06/26 13:17:47 by aherrero              #+#    #+#           */
/* Updated: 2021/06/30 12:28:52 by aherrero             ###   ########.fr     */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"
#include <unistd.h>
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	count;

	count = 0;
	while (str[count] != '\0')
		count++;
	return (count);
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
}

int	file_lines(char *str)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (str[i] != '\0')
	{
		if (str[i] == '\n')
			count++;
		i++;
	}
	return (count);
}

char	**fill_dic(char **dest, char *str, char to_find)
{
	int	i;
	int	word;
	int	letter;

	i = 0;
	word = 0;
	letter = 0;
	while (str[i] != '\0')
	{
		if (str[i] == to_find)
		{
			word++;
			letter = 0;
		}
		else
		{
			dest[word][letter] = str[i];
			letter++;
		}
		i++;
	}
	return (dest);
}

char	**split(char *str, char to_find)
{
	char	**dest;
	int		i;
	int		lines;

	i = 0;
	lines = file_lines(str);
	dest = (char **)malloc(sizeof(char *) * lines);
	if (dest == NULL)
		return (NULL);
	while (i < file_lines(str))
	{
		dest[i] = (char *)malloc(sizeof(char) * ft_strlen(str));
		if (dest[i] == NULL)
			return (NULL);
		i++;
	}
	dest = fill_dic(dest, str, to_find);
	return (dest);
}
