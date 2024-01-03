NAME	= Animal

CC		= g++
CFLAGS	= -Werror -Wextra -Wall -std=c++98 -Wshadow -Wno-shadow

SRC		= src/Animal.cpp src/Cat.cpp src/Dog.cpp src/main.cpp src/WrongCat.cpp src/WrongAnimal.cpp
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
