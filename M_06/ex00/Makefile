# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lseiberr <marvin@42perpignan.fr>           +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/06 16:37:12 by lseiberr          #+#    #+#              #
#    Updated: 2024/01/10 10:55:09 by lseiberr         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= Conversion

CC		= g++
CFLAGS	= -Werror -Wextra -Wall -std=c++98 -Wshadow -Wno-shadow

SRC		= src/ScalarConverter.cpp src/main.cpp
OBJ		= $(SRC:.cpp=.o)


all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $@

%.o: %.cpp
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f src/*.o

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all re clean fclean
