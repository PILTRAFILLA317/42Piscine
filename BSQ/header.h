/* ************************************************************************** */
/*                                                                            */
/*                                                          :::      :::::::: */
/* header.h                                               :+:      :+:    :+: */
/*                                                      +:+ +:+         +:+   */
/* By: aherrero <aherrero@student.42urduliz.com>      +#+  +:+       +#+      */
/*                                                  +#+#+#+#+#+   +#+         */
/* Created: 2021/06/29 10:15:17 by aherrero              #+#    #+#           */
/* Updated: 2021/06/30 12:13:15 by aherrero             ###   ########.fr     */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADER_H
# define	HEADER_H

struct s_base_map
{
	int		area;
	char	empty;
	char	obstacle;
	char	full;
	char	**grid;
};

int					ft_strlen(char *str);
void				ft_putstr(char *str);
int					file_lines(char *str);
char				**split(char *str, char to_find);
char				*readfile(char *name, int len);
char				*get_first_line(char *str);
int					valid_map(char *str);
char				*ft_strcpy(char *dest, char *src);
struct	s_base_map	set_default_map(char *str);
void				print_grid(char **grid);
char				**split(char *str, char to_find);
int					ft_strlen(char	*str);
int					file_lines(char *str);
int					get_norme_counter(char *str);
int					norme_c_error(char *str);
int					sup_len(char *str);
int					pn_vn(int i, char *str);
int					start_pos(char *str);
int					get_biggest_sq(struct s_base_map base, int *x, int *y);
int					get_array_len(char **arr);
int					get_pos(int *x, int *y, struct s_base_map map);
void				resolve_map(struct s_base_map base);

#endif
