NAME	= Zombie

CC		= g++
CFLAGS	= -Werror -Wextra -Wall -std=c++98

SRC		= Zombie.cpp main.cpp newZombie.cpp randomChump.cpp
OBJ		= $(SRC:.cpp=.o)


all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $@

%.o: %.cpp
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f *.o

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all re clean fclean
