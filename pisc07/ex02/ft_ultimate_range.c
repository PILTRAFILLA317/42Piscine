/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: umartin- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/23 17:32:37 by umartin-          #+#    #+#             */
/*   Updated: 2021/06/24 11:09:28 by umartin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	*arr;
	int	c;

	if (min >= max)
	{
		*range = 0;
		return (0);
	}
	arr = (int *)malloc(sizeof(**range) * (max - min));
	if (!arr)
		return (0);
	c = 0;
	while (min < max)
	{
		arr[c] = min;
		c++;
		min++;
	}
	*range = arr;
	return (c);
}
