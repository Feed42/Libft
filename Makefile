# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jcariou <jcariou@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2014/11/29 12:22:41 by jcariou           #+#    #+#              #
#    Updated: 2015/02/02 11:29:09 by jcariou          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

INCLUDE = libft.h

SRC = $(shell ls -1 | grep "\.c")

OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME):
		@gcc -Wall -Werror -Wextra -c $(SRC)
		@ar rc $(NAME) $(OBJ)

clean:
		@/bin/rm -f $(OBJ)

fclean: clean
		@/bin/rm -f $(NAME)

re: fclean all
