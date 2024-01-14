# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lseiberr <lseiberr@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/06 16:37:12 by lseiberr          #+#    #+#              #
#    Updated: 2024/01/13 17:25:02 by lseiberr         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= Span

CC		= g++
CFLAGS	= -Werror -Wextra -Wall -std=c++98 -Wshadow -Wno-shadow

SRC		= main.cpp Span.cpp
OBJ		= $(SRC:.cpp=.o)


all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $@

%.o: %.cpp
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f *.o
	clear

fclean: clean
	rm -f $(NAME)
	clear

re: fclean all

.PHONY: all re clean fclean
