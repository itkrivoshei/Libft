# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jstaunto <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/09/06 19:38:38 by jstaunto          #+#    #+#              #
#    Updated: 2019/09/15 23:19:15 by jstaunto         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= libft.a

FLAGS	= -Wall -Werror -Wextra -I. -c

SRC		= 	ft_strstr.c		\
			ft_atoi.c		\
			ft_strnstr.c	\
			ft_memset.c		\
			ft_strrchr.c	\
			ft_strchr.c		\
			ft_strtrim.c	\
			ft_strjoin.c	\
			ft_strsub.c		\
			ft_bzero.c		\
			ft_memcpy.c		\
			ft_strequ.c		\
			ft_strncmp.c	\
			ft_strnequ.c	\
			ft_islower.c	\
			ft_strncpy.c	\
			ft_memdel.c		\
			ft_strnew.c		\
			ft_strnew.c		\
			ft_strdel.c		\
			ft_strncpy.c	\
			ft_memalloc.c	\
			ft_isupper.c	\
			ft_memccpy.c	\
			ft_strcat.c		\
			ft_strcmp.c		\
			ft_toupper.c	\
			ft_strclr.c		\
			ft_striter.c	\
			ft_striteri.c	\
			ft_strmap.c		\
			ft_tolower.c	\
			ft_isprint.c	\
			ft_strlen.c		\
			ft_isalpha.c	\
			ft_isalnum.c	\
			ft_isascii.c	\
			ft_isdigit.c	\
			ft_strdup.c		\
			ft_putchar.c	\
			ft_strcpy.c		\
			ft_strmapi.c	\
			ft_putchar_fd.c	\
			ft_putstr.c		\
			ft_putstr_fd.c	\
			ft_putnbr.c		\
			ft_putnbr_fd.c	\
			ft_putendl.c	\
			ft_putendl_fd.c	\
			ft_itoa.c		\
			ft_iswspace.c	\

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
