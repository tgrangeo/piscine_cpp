# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tgrangeo <tgrangeo@student.42lyon.fr>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/07/16 13:37:22 by tgrangeo          #+#    #+#              #
#    Updated: 2021/07/16 13:37:44 by tgrangeo         ###   ########lyon.fr    #
#                                                                              #
# **************************************************************************** #

SRCS		= 		main.cpp

OBJS		= 		${SRCS:.cpp=.o}

NAME		= 		serialize

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