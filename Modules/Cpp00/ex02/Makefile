# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lucas <lucas@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/07/25 18:03:05 by lucas             #+#    #+#              #
#    Updated: 2023/07/25 18:03:07 by lucas            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME			=	tests

SRC_DIR		=	.
OBJ_DIR		=	obj/

INCS_DIR	=	.
MAIN_INC	=	-I$(INCS_DIR)
INCS		=	$(shell find $(INCS_DIR) -type f -name "*.hpp")

SRC			=	tests.cpp \
				Account.cpp \

				
OBJ			=	$(SRC:.cpp=.o)

CC				=	clang++
CFLAGS			=	-Wall -Wextra -Werror -std=c++98

%.o:	%.cpp
		$(CC) ${CFLAGS} $(MAIN_INC) -o $@ -c $<

$(NAME)		:	$(OBJ) $(INCS)
		$(CC) $(CFLAGS) $(OBJ) $(MAIN_INC) -o $(NAME)
					
all			:	$(NAME)

clean		:
		@rm -rf $(OBJ)

fclean		:	clean
		@rm -rf $(NAME)

re			:	fclean	all

.PHONY		:	all clean fclean re