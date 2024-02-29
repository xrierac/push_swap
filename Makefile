NAME = push_swap
BONUS = checker

CC = cc
CFLAGS = -Wall -Wextra -Werror

SRC_DIR = .
OBJ_DIR = .
LIBFT_DIR = libft/
BONUS_DIR = bonus/

SRCS := push_swap.c check_error.c create_rank.c parsing.c \
	get_size.c push.c reverse_rotate.c rotate.c sort.c swap.c \
	utils.c three_numbers.c sort_utils.c

BONUS_SRCS := bonus/checker_bonus.c bonus/get_next_line_bonus.c bonus/get_size_bonus.c \
	bonus/parsing_bonus.c bonus/push_bonus.c bonus/reverse_rotate_bonus.c bonus/rotate_bonus.c \
	bonus/swap_bonus.c bonus/utils_bonus.c bonus/check_error_bonus.c

LIBFT := $(LIBFT_DIR)/libft.a

OBJS := $(SRCS:.c=.o)
BONUS_OBJS := $(BONUS_SRCS:.c=.o)

$(NAME) : $(OBJS)
	$(CC) $(OBJS) -Llibft -lft -o $(NAME)

$(BONUS) : $(LIBFT) $(BONUS_OBJS)
	$(CC) $(BONUS_OBJS) -Llibft -lft -o $(BONUS)

$(LIBFT) :
	make -C $(LIBFT_DIR)

%.o:%.c
	cc $(CFLAGS) -c $< -o $@ 

all: $(LIBFT) $(NAME)	

clean:
	make -C $(LIBFT_DIR) clean
	rm -f $(OBJS)
	rm -f $(BONUS_DIR)/$(BONUS_OBJS)

fclean: clean 
	rm -f $(LIBFT)
	rm -f $(NAME)
	rm -f $(BONUS)

bonus: $(BONUS)

re: fclean all

.PHONY : all clean fclean re bonus

