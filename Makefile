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
SRCS =
# functions here plz

INCLS = -I./libft -I./includes

OBJS_LIB = libft/*.o
OBJS = $(SRCS:.c=.o) $(OBJS_LIB)

FLAGS = -Wall -Werror -Wextra

all : $(NAME)

$(NAME) :
	@make -C ./libft
	@echo "Compiling.."
	@gcc -c $(FLAGS) $(INCLS) $(SRCS)
	@echo "Creating library libftprintf.a.."
	@ar rcs $(NAME) $(OBJS)
	@echo "Make complete."

clean :
	@echo "Removing object files.."
	@make -C ./libft/ clean
	@rm -f $(OBJS)

fclean : clean
	@echo "Removing library.."
	@make -C ./libft/ fclean
	@rm -f $(NAME)

re : fclean all

.PHONY: all clean fclean re
