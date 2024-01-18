# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lseiberr <lseiberr@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/18 09:40:48 by lseiberr          #+#    #+#              #
#    Updated: 2024/01/18 09:40:49 by lseiberr         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	= main.cpp RPN.cpp
OBJS	= ${SRCS:.cpp=.o}
CXXFLAGS	= -Wall -Wextra -Werror -std=c++98
RM		= rm -rf
NAME	= RPN
CXX = c++

all	: ${NAME}

${NAME} :
	${CXX} ${CXXFLAGS} ${SRCS} -o ${NAME}

clean :
	${RM} ${OBJS}

fclean : clean
	${RM} ${NAME}

re : fclean all

a : all clean
