# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kmotlaf <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/05/24 15:59:04 by kmotlaf           #+#    #+#              #
#    Updated: 2018/06/28 00:41:44 by kmotlaf          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	libft.a

CC			=	gcc

STD_FLAGS	=	-Wall -Werror -Wextra

C_FLAGS		=	-c

SRCS		=	ft_memset.c \
				ft_memcpy.c \
				ft_strlen.c \
				ft_strchr.c \
				ft_strnew.c \
				ft_strclr.c \
				ft_strjoin.c \
				ft_lstadd.c \
				ft_lstnew.c \
				ft_cpy_eol.c \
				ft_strjoin2.c \

OBJS		=	$(SRCS:.c=.o)

all:			$(NAME)

$(NAME):
	$(CC) $(FLAGS) $(C_FLAGS) $(SRCS)
	ar rc $(NAME) $(OBJS)
	ranlib $(NAME)

clean:
	rm -rf $(OBJS)

fclean:
	rm -rf $(NAME)
	rm -rf $(OBJS)

re:				fclean all
