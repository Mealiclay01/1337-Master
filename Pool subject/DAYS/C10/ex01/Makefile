# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: Mealiclay01 <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/10 14:59:44 by Mealiclay01          #+#    #+#              #
#    Updated: 2021/12/06 22:27:01 by Mealiclay01         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC=gcc
FLAGS=-Wall -Wextra -Werror
INCLUDES=-I./includes
SRCS=$(wildcard srcs/*.c)
OBJS=$(SRCS:.c=.o)
BIN=ft_cat

all: $(BIN)

$(BIN): $(OBJS)
	$(CC) $(INCLUDES) $(FLAGS) $(OBJS) -o $(BIN)
%.o: %.c ft_cat.h
	$(CC) $(FLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(BIN)

.PHONY: all clean fclean
