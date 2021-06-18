SRCS_NAME	=	PhoneBook.cpp main.cpp
				
OBJS		=	${SRCS_NAME:.cpp=.o}

NAME		=	nokia_3310

RM			=	rm -f

CC			=	clang++

FLAGS		=	-Wall -Wextra -Werror -std=c++98

all:	$(NAME)


%.o: %.cpp				
		$(CC) $(FLAG) -c $< -o $@
	
$(NAME):				$(OBJS)
	@$(CC) $(FLAGS) $(OBJS) -o $(NAME)

clean:
	@$(RM) $(OBJS)

fclean:					clean
	@$(RM) $(NAME)

re:                     fclean all	