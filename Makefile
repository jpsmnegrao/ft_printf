NAME = libftprintf.a

SRCS = ft_printf.c format_converter.c
OBJS = $(SRCS:.c=.o)

LIBFT_NAME = libft.a
LIBFT_PATH = ./libft

CC = cc
CFLAGS = -Wall -Wextra -Werror -I$(LIBFT_PATH) 

all: libft $(NAME)

libft:
	@echo "Building libft..."
	make -C $(LIBFT_PATH)

$(NAME): libft $(OBJS)
	ar rcs $(NAME) $(OBJS)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)
	make -C $(LIBFT_PATH) clean

fclean: clean
	rm -f $(NAME)
	make -C $(LIBFT_PATH) fclean

re: fclean $(NAME)

.PHONY:
	all clean fclean re libft
