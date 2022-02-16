/* ************************************************************************** */
/*                                                                            */
/*                                                          :::      :::::::: */
/* map_validator.c                                        :+:      :+:    :+: */
/*                                                      +:+ +:+         +:+   */
/* By: aherrero <aherrero@student.42urduliz.com>      +#+  +:+       +#+      */
/*                                                  +#+#+#+#+#+   +#+         */
/* Created: 2021/06/28 10:25:25 by aherrero              #+#    #+#           */
/* Updated: 2021/06/29 15:48:08 by aherrero             ###   ########.fr     */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

char	*get_first_line(char *str)
{
	int		i;
	char	*line;

	i = 0;
	line = str;
	while (str[i] != '\0')
	{
		if (str[i] != '\n')
			line[i] = str[i];
		else
			break ;
		i++;
	}
	line[i] = '\0';
	return (line);
}

int	start_pos(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == '\n')
			break ;
		i++;
	}
	return (i + 1);
}

int	get_row_len(char *str)
{
	int	i;
	int	count;
	int	temp;

	i = start_pos(str);
	count = 0;
	temp = 0;
	while (str[i] != '\0')
	{
		if (str[i] != '\n')
			temp++;
		else
		{
			if (count != 0)
			{
				if (count != temp)
					return (-1);
			}
			else
				count = temp;
			temp = 0;
		}
		i++;
	}
	return (count);
}

int	valid_norme(char *str)
{
	int	i;
	int	linesnum;
	int	num;

	i = 0;
	num = 0;
	linesnum = file_lines(str);
	while (str[i] != '\0')
	{
		if (str[i] == '\n')
			break ;
		if (str[i] >= '0' && str[i] <= '9')
		{
			num *= 10;
			num += str[i] - '0';
		}
		else
		{
			if (pn_vn(i, str) == 0)
				return (0);
		}
		i++;
	}
	return (1);
}

int	valid_map(char *str)
{
	if (get_row_len(str) < 0)
		return (0);
	if (valid_norme(str) == 0)
		return (0);
	if (norme_c_error(str) == 0)
		return (0);
	if (file_lines(str) - 1 != sup_len(str))
		return (0);
	if (file_lines(str) < 3 && get_row_len(str) < 1)
		return (0);
	return (1);
}
