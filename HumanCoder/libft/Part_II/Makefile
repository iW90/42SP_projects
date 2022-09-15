# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: inwagner <inwagner@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/10 12:46:34 by inwagner          #+#    #+#              #
#    Updated: 2022/09/10 12:50:47 by inwagner         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= libft.a
FLAG	= -Wall -Wextra -Werror
HDR		= -I ./includes/
PRE		= ./srcs/
SRCS	= $(addprefix ${PRE}, ${FTS})
OBJS	= $(FTS:.c=.o)
FTS		= ft_itoa.c ft_putchar_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_putstr_fd.c ft_striteri.c ft_strjoin.c ft_strmapi.c ft_split.c ft_substr.c ft_strtrim.c

all: $(NAME)

$(NAME): $(OBJS)
	ar -rc $(NAME) $(OBJS)

$(OBJS)
	gcc $(FLAG) $(HDR) -c $(SRCS)

clean:
	rm -rf $(OBJS)

fclean:	clean
	rm -rf $(NAME)

re: fclean all