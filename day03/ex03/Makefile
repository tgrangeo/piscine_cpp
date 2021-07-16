SRCS_NAME	=	ClapTrap.cpp ScavTrap.cpp FragTrap.cpp main.cpp DiamondTrap.cpp
				
OBJS		=	${SRCS_NAME:.cpp=.o}

NAME		=	DiamondTrap

RM			=	rm -f

CC			=	clang++

FLAGS		=	-Wall -Wextra -Werror -std=c++98 -Wshadow -Wno-shadow

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