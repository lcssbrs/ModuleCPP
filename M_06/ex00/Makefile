# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lseiberr <marvin@42perpignan.fr>           +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/06 16:37:12 by lseiberr          #+#    #+#              #
#    Updated: 2024/01/08 14:31:12 by lseiberr         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= Bureaucrat

CC		= g++
CFLAGS	= -Werror -Wextra -Wall -std=c++98 -Wshadow -Wno-shadow

SRC		= src/Bureaucrat.cpp src/main.cpp src/Form.cpp src/PresidentialPardonForm.cpp src/ShrubberyCreationForm.cpp src/RobotomyRequestForm.cpp
OBJ		= $(SRC:.cpp=.o)


all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $@

%.o: %.cpp
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f src/*.o
	rm -f *_shrubbery

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all re clean fclean
