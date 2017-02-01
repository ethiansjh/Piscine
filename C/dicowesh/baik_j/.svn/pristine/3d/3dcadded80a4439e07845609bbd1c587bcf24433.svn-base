CC	=	gcc
NAME	=	dicowesh
SRC	=	my_putchar.c \
		my_putstr.c \
		my_strcpy.c \
		main.c \
		list.h
OBJ	=	$(SRC:%.c=%.o)
RM	=	rm -f *.o

$(NAME):	$(OBJ)
		$(CC) $(OBJ) -o $(NAME)
		 $(NAME)

all:		$(NAME)

clean:
		$(RM) $(OBJ)

fclean:			clean
		$(RM) $(NAME)

re:		clean all