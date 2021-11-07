# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tnguyen- <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/08/26 17:54:04 by tnguyen-          #+#    #+#              #
#    Updated: 2021/11/07 18:30:19 by rgarcia          ###   ########lyon.fr    #
#                                                                              #
# **************************************************************************** #

NAME	= player

SRCS	= main.c ft_putnbr.c ft_atoi.c ft_memset.c ft_bzero.c ft_algo.c ft_tabinit.c \ft_check.c

OBJS	= ${SRCS.c=.o}

CC		= gcc
RM		= rm -f

CFLAGS	= -Wall -Werror -Wextra -g3

$(NAME):
		${CC} ${CFLAGS} -o ${NAME} ${SRCS}

all: $(NAME)

clean:
	${RM} ${OBJS}

fclean: clean
	${RM} $(NAME)

re: fclean all

.PHONY: all clean fclean re
