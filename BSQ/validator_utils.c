/* ************************************************************************** */
/*                                                                            */
/*                                                          :::      :::::::: */
/* validator_utils.c                                      :+:      :+:    :+: */
/*                                                      +:+ +:+         +:+   */
/* By: aherrero <aherrero@student.42urduliz.com>      +#+  +:+       +#+      */
/*                                                  +#+#+#+#+#+   +#+         */
/* Created: 2021/06/28 15:40:21 by aherrero              #+#    #+#           */
/* Updated: 2021/06/29 15:49:06 by aherrero             ###   ########.fr     */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int	pn_nce(int jj, int i, char *str)
{
	int	rc;

	rc = 0;
	while (rc <= 4)
	{
		if (str[i] == str[jj])
			break ;
		else if (rc == 3)
			return (0);
		else
		{
			jj--;
			rc++;
		}
	}
	return (1);
}

int	norme_c_error(char *str)
{
	int	i;
	int	j;
	int	jj;

	i = start_pos(str);
	j = 0;
	while (str[j] != '\n')
		j++;
	while (str[i] != '\0')
	{
		jj = j;
		if (pn_nce(jj, i, str) == 0)
			return (0);
		i++;
	}
	if (j < 4)
		return (0);
	return (1);
}

int	sup_len(char *str)
{
	int	i;
	int	j;
	int	n;

	i = 0;
	j = 0;
	n = 0;
	while (str[j] != '\n')
		j++;
	while (i < j - 3)
	{
		if (str[i] >= '0' && str[i] <= '9')
		{
			n = n * 10;
			n += str[i] - '0';
		}
		else
		{
			return (0);
		}
		i++;
	}
	return (n);
}

int	pn_vn(int i, char *str)
{
	int	j;

	j = i + 1;
	while (str[j] != '\0')
	{
		if (str[j] == '\n')
			break ;
		if (str[i] == str[j])
			return (0);
		j++;
	}
	return (1);
}
