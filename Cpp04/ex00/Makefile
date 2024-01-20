# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lucas <lucas@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/25 10:55:44 by lucas             #+#    #+#              #
#    Updated: 2023/09/25 17:32:48 by lucas            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME			=	Animal

SRC_DIR		=	./src/
OBJ_DIR		=	obj/

INCS_DIR	=	includes
MAIN_INC	= -I $(INCS_DIR)
INCS		=	$(shell find $(INCS_DIR) -type f -name "*.hpp")

SRC			=	main.cpp \
				Animal.cpp \
				Cat.cpp \
				Dog.cpp \
				WrongAnimal.cpp \
				WrongCat.cpp \
				
OBJ			=	$(addprefix $(OBJ_DIR), $(SRC:.cpp=.o))

CC				=	clang++
CFLAGS			=	-Wall -Wextra -Werror -std=c++98

$(OBJ_DIR)%.o:	$(SRC_DIR)%.cpp
		@mkdir -p $(OBJ_DIR)
		$(CC) ${CFLAGS}  $(MAIN_INC) -o $@ -c $<

$(NAME)		:	$(OBJ) $(INCS)
		$(CC) $(CFLAGS) $(OBJ) $(MAIN_INC) -o $(NAME)
					
all			:	$(NAME)

clean		:
		@rm -rf $(OBJ_DIR)

fclean		:	clean
		@rm -rf $(NAME)

re			:	fclean	all

.PHONY		:	all clean fclean re