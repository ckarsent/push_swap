NAME = push_swap
CC = cc
CFLAGS = 

SRCS = main_free_error.c \
		./sort/to_a.c \
		./sort/to_b.c \
		./sort/to_b_utils.c \
		./sort/min_max.c \
		./sort/calcul_chunk.c \
		./sort/little_sort.c \
		./sort/push_swap.c \
		./sort/utils.c \
		./parsing/extract_tab.c \
		./parsing/check_args.c \
		./parsing/utils_parsing.c \
		./parsing/ft_split.c \
		./commandes/ft_push.c \
		./commandes/ft_reverse.c \
		./commandes/ft_rotate.c \
		./commandes/ft_swap.c
OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJS)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY = all clean fclean re
