# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jstaunto <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/09/06 19:38:38 by jstaunto          #+#    #+#              #
#    Updated: 2019/09/18 12:02:28 by jstaunto         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= libft.a
INCL	= ./
FLAGS	= -Wall -Werror -Wextra -I $(INCL) -c
OBJ 	= *.o
SRC		= *.c

all:	$(NAME)

$(NAME): $(SRC) libft.h
	gcc $(FLAGS) $(SRC)
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all
