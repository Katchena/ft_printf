# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kfortova <kfortova@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/07 09:55:42 by kfortova          #+#    #+#              #
#    Updated: 2023/02/07 10:18:49 by kfortova         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
SRC = 			ft_printf.c \
				ft_putchar.c \
				ft_puts.c \
				ft_putptr.c \
				ft_putnbr.c \
				ft.putu.c \
				ft_puthex.c \
				ft_puthexup.c \

OBJ		=	$(SRC:.c=.o)
CC		=	cc
CFLAGS	=	-Wall -Wextra -Werror
RM		=	rm -f

$(NAME): $(OBJ)
		ar crs $(NAME) $(OBJ)

%.o: %.c
		$(CC) $(CFLAGS) -c $^ -o $@

all: $(NAME)

clean: 
		$(RM) $(OBJ)

fclean: clean
		$(RM) $(OBJ)

re: fclean all

 .PHONY: all clean fclean re
