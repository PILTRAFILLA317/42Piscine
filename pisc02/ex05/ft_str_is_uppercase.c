/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: umartin- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/16 10:09:30 by umartin-          #+#    #+#             */
/*   Updated: 2021/06/16 18:26:14 by umartin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int	c;

	c = 0;
	while (str[c] >= 'A' && str[c] <= 'Z')
		c ++;
	if (str[c] == '\0')
		return (1);
	else
		return (0);
}