# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tlahin <tlahin@student.hive.fi>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/27 12:44:18 by tlahin            #+#    #+#              #
#    Updated: 2022/06/27 12:44:19 by tlahin           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME = libftprintf.a

SRCS_DIR = sources/
SRCS_LIST =
# functions here plz



FLAGS = -Wall -Werror -Wextra

all : $(NAME)

$(NAME) :
	stuff and things

clean :
	rm -f $(OBJS)

fclean : clean
	rm -f $(NAME)

re : fclean all

.PHONY: all clean fclean
