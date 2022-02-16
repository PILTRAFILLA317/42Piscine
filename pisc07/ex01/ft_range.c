/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: umartin- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/23 15:57:42 by umartin-          #+#    #+#             */
/*   Updated: 2021/06/24 11:08:09 by umartin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	c;
	int	*arr;

	c = 0;
	if (min >= max)
		return (0);
	arr = malloc(sizeof(int) * (max - min));
	if (!arr)
		return (0);
	while (min < max)
	{
		arr[c] = min;
		c++;
		min++;
	}
	return (arr);
}
