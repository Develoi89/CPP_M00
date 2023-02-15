
NAME		=	megaphone

SRC			=	megaphone.cpp   
				
OBJ			=	$(SRC:.cpp=.o)

CC			=	c++
CFLAGS		=	-Wall -Wextra -Werror -std=c++98

%.o:	%.cpp
		$(CC) ${CFLAGS} -o $@ -c $<

$(NAME)		:	$(OBJ)
		$(CC) $(CFLAGS) $(OBJ) -o $(NAME)
					
all			:	$(NAME)

clean		:
		@rm -rf

fclean		:	clean
		@rm -rf $(NAME) $(OBJ)

re			:	fclean	all

.PHONY		:	all clean fclean re