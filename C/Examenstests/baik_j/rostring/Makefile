CC	=	gcc
NAME	=	rostring
SRC	=	rostring.c
OBJ	=	$(SRC:%.c=%.o)
RM	=	rm -f *.o

$(NAME):	$(OBJ)
		$(CC) -W -Wall -Werror $(OBJ) -o $(NAME)

all:		$(NAME)

clean:
		$(RM) $(OBJ)

fclean:			clean
		$(RM) $(NAME)

re:		fclean all
