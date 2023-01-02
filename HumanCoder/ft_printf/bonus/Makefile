# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: inwagner <inwagner@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/19 19:58:12 by inwagner          #+#    #+#              #
#    Updated: 2022/12/24 09:43:21 by inwagner         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= libftprintf.a
FLAG	= -Wall -Wextra -Werror
HDR		= -I ./includes/
PRE		= ./src/
FTS 	= ft_printf_aux.c ft_printf.c
SRC		= $(addprefix ${PRE}, ${FTS})
OBJS	= $(FTS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	@ar -rcs $(NAME) $(addprefix ./objs/, $(OBJS))

%.o: ./src/%.c
	@mkdir -p objs
	@cc $(FLAG) $(HDR) -c $< -o ./objs/$@

clean:
	@rm -rdf ./objs

fclean:	clean
	@rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re
