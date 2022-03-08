NAME		=	push_swap

CC			=	gcc

CFLAGS		=	

SRC			=	push_swap.c stack2.c stack.c ft_atoi.c ft_isdigit.c command1.c sorting.c ft_strlen.c extra.c \
				for_sorting1.c for_sorting2.c split.c delete_first.c

OBJ			=	$(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ) Makefile
	$(CC) $(OBJ) -o $(NAME)
	
%.o: %.c
	$(CC) -c $< -o $@

clean:
		rm -f $(OBJ)

fclean: clean
		rm -f $(NAME)

re: fclean all

norm:
	norminette
