# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: imsbaiti <imsbaiti@student.1337.ma>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/12/13 18:10:11 by imsbaiti          #+#    #+#              #
#    Updated: 2024/12/16 17:12:45 by imsbaiti         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

FILES = ft_printf.c ft_putchar_pf.c ft_puthex_pf.c ft_putnbr_pf.c ft_putptr_pf.c \
        ft_putstr_pf.c ft_putuns_pf.c

OBJS = $(FILES:.c=.o)
CC = cc 

FLAGS = -Wall -Wextra -Werror

all : $(NAME)

$(NAME) : $(OBJS)
		ar r $(NAME) $(OBJS)

%.o : %.c ft_printf.h
		$(CC) $(FLAGS) -c $< -o $@

clean :
		rm -f  $(OBJS)
fclean : clean
		rm -f $(NAME)
re : fclean all
