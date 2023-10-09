SOURCES = sources/ft_atoi.c sources/main.c sources/read_file.c sources/ft_dictparsing.c

OBJECTS = $(SOURCES:.c=.o)

INCLUDE = includes

GCC_FLAGS = -Wall -Wextra -Werror

NAME = rush-02

all: $(NAME)

$(NAME): $(OBJECTS)
	gcc -o ${NAME} $(OBJECTS)

$(OBJECTS):
	gcc $(GCC_FLAGS) -I $(INCLUDE) -c ${@:.o=.c} -o $@

clean:
	rm -f $(OBJECTS)

fclean:
	rm -f $(NAME) $(OBJECTS)

re: fclean all

.PHONY: all clean fclean re