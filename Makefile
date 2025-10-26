NAME = libftprintf.a
MY_SOURCES = ft_printf.c ft_putchar.c ft_putstr.c

MY_OBJECTS = $(MY_SOURCES:.c=.o)
CFLAGS += -Wall -Wextra -Werror

$(NAME): $(MY_OBJECTS)
	ar rcs $(NAME) $(MY_OBJECTS)

%.o: %.c
	cc $(CFLAGS) -c $< -o $@

all: $(NAME)

clean:
	rm -f $(MY_OBJECTS)

fclean: clean
	rm -f $(NAME)

re: fclean $(NAME)

.PHONY:
	all clean fclean re bonus
