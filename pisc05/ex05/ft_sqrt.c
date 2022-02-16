/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: umartin- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/22 14:25:46 by umartin-          #+#    #+#             */
/*   Updated: 2021/06/22 15:28:31 by umartin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	c;

	c = 1;
	while (c * c <= nb && c < 46341)
		c++;
	c--;
	if (c * c == nb)
		return (c);
	return (0);
}
