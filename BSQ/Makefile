# **************************************************************************** #
#                                                                              #
#                                                           :::      ::::::::  #
#  Makefile                                               :+:      :+:    :+:  #
#                                                       +:+ +:+         +:+    #
#  By: aherrero <aherrero@student.42urduliz.com>      +#+  +:+       +#+       #
#                                                   +#+#+#+#+#+   +#+          #
#  Created: 2021/06/30 13:50:31 by aherrero              #+#    #+#            #
#  Updated: 2021/06/30 13:54:17 by aherrero             ###   ########.fr      #
#                                                                              #
# **************************************************************************** #

NAME = bsq
SRC = main.c map_admin.c map_validator.c resolve.c utils.c validator_utils.c file_admin.c

all: $(NAME)
$(NAME):
	gcc -Wall -Wextra -Werror $(SRC) -o $(NAME)
clean:
	/bin/rm -f *.o
fclean: clean
	/bin/rm -f $(NAME)
re: fclean all
