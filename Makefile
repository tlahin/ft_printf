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


SRCS = $(addprefix $(SRCS_DIR), $(SRCS_LIST))

OBJS = $(SRCS_LIST:.c=.o)

INCL_DIR = includes/
INCLUDES = -I $(INCL_DIR)

FLAGS = -Wall -Werror -Wextra

