# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: inwagner <inwagner@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/10 12:46:34 by inwagner          #+#    #+#              #
#    Updated: 2022/10/08 22:12:13 by inwagner         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= libft.a
FLAG	= -Wall -Wextra -Werror
HDR		= -I ./includes/
PREB	= ./bonus/
PRE		= ./src/
SRCSB 	= $(addprefix ${PREB}, ${FTSB})
SRCS	= $(addprefix ${PRE}, ${FTS})
OBJSB	= $(FTSB:.c=.o)
OBJS	= $(FTS:.c=.o)
FTSB 	= ft_lstadd_back.c ft_lstadd_front.c ft_lstclear.c ft_lstdelone.c ft_lstiter.c ft_lstlast.c ft_lstmap.c ft_lstnew.c ft_lstsize.c
FTS		= ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c ft_memchr.c ft_memcmp.c ft_memcpy.c ft_memmove.c ft_memset.c ft_strchr.c ft_strdup.c ft_strlcat.c ft_strlcpy.c ft_strlen.c ft_strncmp.c ft_strnstr.c ft_strrchr.c ft_tolower.c ft_toupper.c ft_itoa.c ft_putchar_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_putstr_fd.c ft_striteri.c ft_strjoin.c ft_strmapi.c ft_split.c ft_substr.c ft_strtrim.c

all: $(NAME)

$(NAME): $(OBJS)
	@ar -rcs $(NAME) $(OBJS)

$(OBJS):
	@cc $(FLAG) $(HDR) -c $(addprefix ${PRE}, ${@:.o=.c})

bonus: $(NAME) $(OBJSB)

$(OBJSB):
	@cc $(FLAG) $(HDR) -c -c $(addprefix ${PREB}, ${@:.o=.c})
	@ar -rcs $(NAME) $@

clean:
	@rm -rf $(OBJS) $(OBJSB)

fclean:	clean
	@rm -rf $(NAME)

re: fclean all

.PHONY: all bonus clean fclean re