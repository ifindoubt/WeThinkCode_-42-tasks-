# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kmotlaf <kmotlaf@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/02/07 09:38:40 by kmotlaf           #+#    #+#              #
#    Updated: 2018/08/21 17:39:13 by kmotlaf          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME 		=	kmotlaf.filler

CC 			=	gcc

STD_FLAGS 	=	-Wall -Wextra -Werror

FILL_P_SRCS	=	./resources/players/

SRCS 		=	./srcs/

OBJS 		=	./objs/

INCS 		=	./includes/

LIBFT_SRCS	=	./libft/

SRC_NAME	=	main.c			\
				moves.c			\
				place_p.c		\
				filler_news.c	\
				init_map.c		\
				id_token.c		\
				check_token.c	\

OBJ_NAME 	=	$(SRC_NAME:.c=.o)

SRC 		=	$(addprefix $(SRCS)/,$(SRC_NAME))

OBJ			=	$(addprefix $(OBJS), $(OBJ_NAME))

D_FLAGS		=	-L

LFT			=	-lft

all: $(NAME)

$(NAME): $(OBJ) $(INCS)
	@make -C./libft/
	@echo "\036Creating $(NAME) to be moved to players ...\n"
	@$(CC) $(STD_FLAGS) $(D_FLAGS) $(LIBFT_SRCS) $(LFT) $(OBJ) -o $@
	@mv $(NAME) $(FILL_P_SRCS)

$(OBJS)%.o: $(SRCS)%.c
	@mkdir $(OBJS) 2> /dev/null || true
	@$(CC) $(STD_FLAGS) -I $(INCS) -o $@ -c $<

clean: cleanlib
	@echo "\036Removed .o files from filler: (OBJ)\036\n"
	@echo "\036Removed directory from filler: (OBJS)\036\n"
	@rm -rf $(OBJ)
	@rmdir $(OBJS) 2> /dev/null || true

cleanlib:
	@make clean -C ./libft/

fclean: clean fcleanlib
	@echo "\036Removal of $(NAME) ..."
	@rm -rf $(FILL_P_SRCS)$(NAME)
	@echo "\036Binary $(NAME) deleted\n\036"

fcleanlib:
	@make fclean -C ./libft/

re : fclean all

.PHONY : all clean fclean re
