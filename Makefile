NAME = libftprintf.a

SRCS = ft_printf.c
OBJS = $(SRCS:.c=.o)
LIBFT = libft.a
LIBFT_PATH = ./libft

CC = cc
CFLAGS += -Wall -Wextra -Werror -I./libft/ -L./libft/bin/ -lft

all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean $(NAME)

libft:
	make -C libft/

.PHONY:
	all clean fclean re
