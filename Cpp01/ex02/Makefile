# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lucas <lucas@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/07/27 15:28:20 by lucas             #+#    #+#              #
#    Updated: 2023/07/27 15:37:46 by lucas            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = c++
NAME = brain
FLAGS = -Wall -Wextra -Werror -std=c++98
SRC = main.cpp

all: $(NAME)

$(NAME): *.cpp
	$(CC) $(FLAGS) $(SRC) -o $(NAME)

dev: *.cpp
	$(CC) $(SRC) -o $(NAME)

clean:
	rm -f *.o

fclean: clean
	rm -f $(NAME)

re: fclean $(NAME)