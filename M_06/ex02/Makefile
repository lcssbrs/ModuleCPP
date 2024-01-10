# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lseiberr <lseiberr@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/06 16:37:12 by lseiberr          #+#    #+#              #
#    Updated: 2024/01/10 16:18:59 by lseiberr         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= base

CC		= g++
CFLAGS	= -Werror -Wextra -Wall -std=c++98 -Wshadow -Wno-shadow

SRC		= src/main.cpp src/Base.cpp
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
