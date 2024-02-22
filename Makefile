NAME = push_swap

CC = cc
CFLAGS = -Wall -Wextra -Werror

SRC_DIR = .
OBJ_DIR = .
LIBFT_DIR = libft/

SRCS := push_swap.c check_error.c create_rank.c parsing.c \
	get_size.c push.c reverse_rotate.c rotate.c sort.c swap.c \
	utils.c three_numbers.c sort_utils.c

LIBFT := $(LIBFT_DIR)/libft.a

OBJS := $(SRCS:.c=.o)

$(NAME) : $(LIBFT) $(OBJS)
	$(CC) $(OBJS) -Llibft -lft -o $(NAME)

$(LIBFT) :
	make -C $(LIBFT_DIR)

%.o:%.c
	cc $(CFLAGS) -c $< -o $@ 

all: $(NAME) $(LIBFT)	

clean:
	make -C $(LIBFT_DIR) clean
	rm -f $(OBJS)

fclean: clean 
	rm -f $(LIBFT)
	rm -f $(NAME)
	

re: fclean all

.PHONY : all clean fclean re libft

