/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: umartin- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/22 13:35:55 by umartin-          #+#    #+#             */
/*   Updated: 2021/06/22 14:01:56 by umartin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	m;

	m = nb;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	if (power > 0)
	{
		while (power > 1)
		{
			nb = nb * m;
			power--;
		}
	}
	return (nb);
}
