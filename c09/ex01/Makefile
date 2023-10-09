SOURCES = srcs/ft_putchar.c srcs/ft_putstr.c srcs/ft_strcmp.c srcs/ft_strlen.c srcs/ft_swap.c

OBJECTS = $(SOURCES:.c=.o) 

INCLUDE = includes

GCC_FLAGS = -Wall -Wextra -Werror

NAME = libft.a

all: $(NAME)

$(NAME): $(OBJECTS)
	ar -src $(NAME) $(OBJECTS)

$(OBJECTS):
	gcc $(GCC_FLAGS) -I $(INCLUDE) -c ${@:.o=.c} -o $@

clean:
	rm -f $(OBJECTS)

fclean:
	rm -f $(NAME) $(OBJECTS)

re: fclean all

.PHONY: all clean fclean re
