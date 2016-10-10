CC := 		gcc -g

HEADER :=	-I header/

CFLAGS := 	-W -Wall -Wextra $(HEADER)

SRC := 		main.c

OBJ := 		$(SRC:.c=.o)

NAME := 	IOI

RM := 		rm -rf

all:		$(NAME) clean

$(NAME):	$(OBJ)
		$(CC) -o $(NAME) $(OBJ) $(CFLAGS)

clean:
		$(RM) $(OBJ) *~ src/*~ header/*~

fclean:		clean
		$(RM) $(NAME)

re:		fclean all
