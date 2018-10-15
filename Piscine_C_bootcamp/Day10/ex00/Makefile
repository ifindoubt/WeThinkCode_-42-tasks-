DEST = libft.a

SRCS = srcs/ft_putchar.c srcs/ft_putstr.c srcs/ft_strcmp.c srcs/ft_strlen.c srcs/ft_swap.c

CC = gcc

OBJ = ft_putchar.o ft_putstr.o ft_ ft_strcmp.o ft_strlen.o ft_swap.o

FLAGS = $(CC) -Wall -Wextra -Werror -c

DEST:
		$(FLAGS) $(SRCS)
		ar rc $(DEST) $(OBJ)

clean: bin/rm -rf $(OBJ)

fclean: clean
		/bin/rm -rf $(DEST)

re: fclean all