# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: djoly <djoly@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/02/23 18:51:39 by mdriay            #+#    #+#              #
#    Updated: 2016/03/02 18:56:16 by djoly            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

CC = gcc

CFLAGS = #-Wall -Wextra -Werror

RM = rm -f

HEADERS = -I /

SRC=ft_printf.c  token.c ft_put.c fonct_p.c\
	fonct_d.c fonct_D.c fonct_c.c fonct_C.c fonct_u.c fonct_s.c fonct_o.c fonct_O.c fonct_x.c\
	ft_putchar.c ft_putnbr.c ft_putstr.c ft_atoi.c ft_strchr.c \
	ft_nbrlen.c print_percent.c fonct_error.c  \
	tools_octal.c\

OBJ = $(SRC:.c=.o)

$(NAME): ft_printf.h
	$(CC) $(CFLAGS) -c $(SRC) $(HEADERS)
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)

all: $(NAME)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)


aclean: all clean

re: fclean all
