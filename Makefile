# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jstaunto <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/09/06 19:38:38 by jstaunto          #+#    #+#              #
#    Updated: 2019/09/10 22:19:48 by jstaunto         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= libft.a

FLAGS	= -Wall -Werror -Wextra -I. -c

SRC		= 	ft_memset.c \
			ft_bzero.c \
			ft_memcpy.c \
			ft_memccpy.c \
			ft_strdup.c \
			ft_putchar.c \
			ft_putchar_fd.c \
			ft_putstr.c \
			ft_putstr_fd.c \
			ft_putnbr.c \
			ft_putnbr_fd.c \
			ft_putendl.c \
			ft_putendl_fd.c \
			ft_itoa.c \

OBJ 	= $(SRC:.c=.o)

all:	$(NAME)

$(NAME): $(OBJ)
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: clean fclean all re
