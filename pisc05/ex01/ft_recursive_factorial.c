/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: umartin- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/22 12:32:28 by umartin-          #+#    #+#             */
/*   Updated: 2021/06/22 13:32:07 by umartin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
		return (0);
	else
	{
		return (nb * ft_recursive_factorial(nb - 1));
	}
	return (1);
}
