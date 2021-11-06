# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tnguyen- <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/08/26 17:54:04 by tnguyen-          #+#    #+#              #
#    Updated: 2021/11/06 18:01:15 by tnguyen-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= libft.a

SRCS	= ft_atoi.c ft_main.c ft_tabinit.c ft_memset.c
HEADER	= .
OBJS	= $(SRCS:.c=.o)

CC		= gcc
CFLAGS	= -Wall -Werror -Wextra -g3 -fsanitize=address

$(NAME):
	$(CC) $(CFLAGS) -c $(SRCS) -I${HEADER}

all: $(NAME)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all