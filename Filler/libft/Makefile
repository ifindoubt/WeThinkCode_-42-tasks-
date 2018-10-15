# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kmotlaf <kmotlaf@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/05/24 15:59:04 by kmotlaf           #+#    #+#              #
#    Updated: 2018/08/27 07:11:57 by kmotlaf          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

LIBFT_NAME		=	libft.a

LIBFT_CC		=	gcc

LIBFT_STD_FLAGS	=	-Wall -Werror -Wextra

LIBFT_C_FLAGS	=	-c

LIBFT_SRCS		=	ft_bzero.c			\
					ft_strlen.c			\
					ft_strdup.c			\
					ft_strcpy.c			\
					ft_strncpy.c		\
					ft_strchr.c			\
					ft_atoi.c			\
					ft_isdigit.c		\
					ft_memalloc.c		\
					ft_strnew.c			\
					ft_strjoin.c		\
					ft_strcat.c			\
					ft_putchar.c		\
					ft_putchar_fd.c		\
					ft_putnbr.c			\
					ft_putnbr_fd.c		\
					ft_strnew_grid.c	\
					get_next_line.c		\

LIBFT_OBJS		=	$(LIBFT_SRCS:.c=.o)

all:				$(LIBFT_NAME)

$(LIBFT_NAME):
	@echo "\036Compiling ... \036\n"
	$(LIBFT_CC) $(LIBFT_STD_FLAGS) $(LIBFT_C_FLAGS) $(LIBFT_SRCS)
	@echo "\n\036Creation of $(LIBFT_NAME) ...\036\n"
	@ar rc $(LIBFT_NAME) $(LIBFT_OBJS)
	@ranlib $(LIBFT_NAME)
	@echo "\036Created .o files of libft: \01$(LIBFT_OBJS)\036\n"

clean:
	@rm -rf $(LIBFT_OBJS)

fclean: clean
	@echo "\035Removed $(LIBFT_NAME) \035\n"
	@rm -rf $(LIBFT_NAME)
	@echo "\035Removed $(LIBFT_OBJS) \035\n"
	@rm -rf $(LIBFT_OBJS)

re:				fclean all

.PHONY		: all clean fclean re
