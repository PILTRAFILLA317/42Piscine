/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sudokunt.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: umartin- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/20 11:29:56 by umartin-          #+#    #+#             */
/*   Updated: 2021/06/20 20:42:05 by umartin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#ifndef SUDOKUNT_H

# define	SUDOKUNT_H
# define SIZE 4

typedef struct s_params
{
	char	up[4];
	char	down[4];
	char	left[4];
	char	right[4];
}	t_params;

int	arg_is_valid(char *av, t_params *params);
int	resolve(char grid[SIZE][SIZE], t_params *params);
int	search_empty_case(char grid[SIZE][SIZE], int *x, int *y);
int	can_put_value(char grid[SIZE][SIZE], int x, int y, int value);
int	line_is_valid(char grid[SIZE][SIZE], t_params *params, int y);
int	column_is_valid(char grid[SIZE][SIZE], t_params *params, int x);
int	calculate_views(char grid[SIZE][SIZE], int pos);
int	print_grid(char grid[SIZE][SIZE]);

#endif
