# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tgrangeo <tgrangeo@student.42lyon.fr>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/10/09 13:51:45 by rpichon           #+#    #+#              #
#    Updated: 2021/07/16 13:37:16 by tgrangeo         ###   ########lyon.fr    #
#                                                                              #
# **************************************************************************** #


SRCS		= 		main.cpp

OBJS		= 		${SRCS:.cpp=.o}

NAME		= 		base

RM			= 		rm -f

FLAGS 		= 		-Wall -Wextra -Werror

all:							$(NAME)

%.o: %.cpp
								clang++ $(FLAGS) -c $< -o $@

$(NAME):						$(OBJS) Makefile
								clang++ $(FLAGS) $(OBJS) -o $(NAME)

clean:
								$(RM) *.o

fclean:							clean
								$(RM) $(NAME)

re:								fclean all

.PHONY: 						clean fclean

