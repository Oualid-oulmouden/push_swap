CC = cc

CFLAGS = -Wall -Wextra -Werror

NAME = libftprintf.a

files_c = swap_value_in_a.c \
	swap_value_in_b.c \
	swap_value_in_ab.c \

files_o = $(files_c:.c=.o)

all: $(NAME)

$(NAME): $(files_o)

.c.o:
	$(CC) $(CFLAGS) -c $< -o $@
	ar -r $(NAME) $@

clean:
	rm -f $(files_o)

fclean:
	rm -f $(files_o) $(NAME)

re: fclean all


