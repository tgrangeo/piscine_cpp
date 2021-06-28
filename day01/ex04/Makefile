SRCS_NAME	=	replace.cpp
				
OBJS		=	${SRCS_NAME:.cpp=.o}

NAME		=	replace

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
	@$(RM) *.replace

fclean:					clean
	@$(RM) $(NAME)

re:                     fclean all	