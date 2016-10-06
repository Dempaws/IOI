CC := gcc

CFLAGS := -W -Wall -Wextra

SRC := main.c

OBJ := $(SRC:.c=.o)

NAME := IOI

RM := rm -rf

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) -o $(NAME) $(OBJ) $(CFLAGS)

clean: $(RM) $(OBJ)

fclean:	clean
	$(RM) $(NAME)

re:	fclean all
