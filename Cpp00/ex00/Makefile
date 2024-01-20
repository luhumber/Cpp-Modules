# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lucas <lucas@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/06/24 18:05:03 by lucas             #+#    #+#              #
#    Updated: 2023/06/24 18:13:39 by lucas            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	megaphone

SRCS	=	megaphone.cpp

CC		=	g++
CFLAGS	=	-Wall -Wextra -Werror

RM		=	rm -f

OBJS	=	$(SRCS:.cpp=.o)

%.o: %.cpp
	@$(CC) $(FLAGS) -c $< -o $@

all : $(NAME)

$(NAME) : $(OBJS)
	@$(CC) $(CFLAGS) $^ -o $(NAME)
	@echo '$(NAME) compiled!'
	
fclean	: clean
	@$(RM) $(NAME)

clean	:
	@$(RM) $(OBJS)
	
re		: fclean all

.PHONY	:	all clean fclean re