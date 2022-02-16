/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: umartin- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/20 14:22:11 by umartin-          #+#    #+#             */
/*   Updated: 2021/06/20 14:23:01 by umartin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		is_valid_condition(char *cond);
int		rush(void);

int		main(int argc, char *argv[])
{
	if (argc != 2 || !(is_valid_condition(argv[1]) && sudokunt()))
		write(1, "Error\n", 6);
	return (0);
}
