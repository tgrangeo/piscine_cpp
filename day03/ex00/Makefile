SRCS_NAME	=	ClapTrap.cpp main.cpp
				
OBJS		=	${SRCS_NAME:.cpp=.o}

NAME		=	ClapTrap

RM			=	rm -f

CC			=	clang++

FLAGS		=	-Wall -Wextra -Werror -std=c++98

all:					$(NAME)

%.o: %.cpp				
		$(CC) $(FLAGS) -c $< -o $@
	
$(NAME):				$(OBJS)
	@$(CC) $(FLAGS) $(OBJS) -o $(NAME)

clean:
	@$(RM) $(OBJS)

fclean:					clean
	@$(RM) $(NAME)

re:                     fclean all	