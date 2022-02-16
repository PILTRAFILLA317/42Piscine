/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: umartin- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/23 12:31:33 by umartin-          #+#    #+#             */
/*   Updated: 2021/06/24 13:12:06 by umartin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int		c;	
	char	*dup;

	c = 0;
	dup = malloc(sizeof(*src));
	if (dup == 0)
		return (0);
	while (src[c] != '\0')
	{
		dup[c] = src[c];
		c++;
	}
	dup[c] = '\0';
	return (dup);
}
