/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: umartin- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/16 16:35:50 by umartin-          #+#    #+#             */
/*   Updated: 2021/06/16 18:36:04 by umartin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	len;
	unsigned int	c;

	len = 0;
	c = 0;
	if (size != 0)
	{
		while (src[c] != '\0' && c < (size - 1))
		{
			dest[c] = src[c];
			c++;
		}
		dest[c] = '\0';
	}
	while (src[len] != '\0')
		len++;
	return (len);
}
