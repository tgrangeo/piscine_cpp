# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tgrangeo <tgrangeo@student.42lyon.fr>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/07/13 12:00:49 by tgrangeo          #+#    #+#              #
#    Updated: 2021/07/19 12:02:33 by tgrangeo         ###   ########lyon.fr    #
#                                                                              #
# **************************************************************************** #

SRCS_NAME	= main.cpp
				
OBJS		=	${SRCS_NAME:.cpp=.o}

NAME		=	ex00

HEADER		=	whatever.hpp

RM			=	rm -f

CC			=	clang++

FLAGS		=	-Wall -Wextra -Werror -std=c++98

all: $(NAME)	

%.o: %.cpp
		$(CC) $(FLAGS) -c $< -o $@
	
$(NAME): $(OBJS) $(HEADER)
	$(CC) $(FLAGS) $(OBJS) -o $(NAME)

clean:
	$(RM) $(OBJS)

fclean:	clean
	$(RM) $(NAME)

re: fclean all
