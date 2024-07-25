# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: eamchart <eamchart@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/07/16 21:34:35 by eamchart          #+#    #+#              #
#    Updated: 2024/07/17 19:37:19 by eamchart         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
CC = gcc
FLAG = -Wall -Wextra -Werror
SOURCS_DIR = srcs
SRC = $(wildcard $(SOURCS_DIR)/*.c)
OBJS = $(SRC:.c=.o)
HDR = includes/ft.h
RM = rm -f
R = ar rc

all: $(NAME)

%.o: %.c
	$(CC) $(FLAG) -I$(HDR) -c $< -o $@

$(NAME): $(OBJS)
	$(R) $(NAME) $(OBJS)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all
