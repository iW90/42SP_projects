# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: inwagner <inwagner@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/10 12:46:34 by inwagner          #+#    #+#              #
#    Updated: 2023/05/29 19:49:17 by inwagner         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# NAMES
NAME	:=	libft.a

# FLAGS
HDR		:=	-I ./includes/
CFLAG	:=	-Wall -Wextra -Werror

# PATHS
SRC		:=	./src/
OSRC	:=	./objs/
BSRC	:=	$(addprefix $(SRC), bonus/)

# MANDATORY
FTS		:=	ft_atoi.c \
			ft_bzero.c \
			ft_calloc.c \
			ft_isalnum.c \
			ft_isalpha.c \
			ft_isascii.c \
			ft_isdigit.c \
			ft_isprint.c \
			ft_memchr.c \
			ft_memcmp.c \
			ft_memcpy.c \
			ft_memmove.c \
			ft_memset.c \
			ft_strchr.c \
			ft_strdup.c \
			ft_strlcat.c \
			ft_strlcpy.c \
			ft_strlen.c \
			ft_strncmp.c \
			ft_strnstr.c \
			ft_strrchr.c \
			ft_tolower.c \
			ft_toupper.c \
			ft_itoa.c \
			ft_putchar_fd.c \
			ft_putendl_fd.c \
			ft_putnbr_fd.c \
			ft_putstr_fd.c \
			ft_striteri.c \
			ft_strjoin.c \
			ft_strmapi.c \
			ft_split.c \
			ft_substr.c \
			ft_strtrim.c \

BFTS	:=	ft_lstadd_back.c \
			ft_lstadd_front.c \
			ft_lstclear.c \
			ft_lstdelone.c \
			ft_lstiter.c \
			ft_lstlast.c \
			ft_lstmap.c \
			ft_lstnew.c \
			ft_lstsize.c

OBJ		:=	$(addprefix $(OSRC), $(FTS:.c=.o)) $(addprefix $(OSRC), $(BFTS:.c=.o))

# Commands
all: $(NAME)

# Compile Objects
$(NAME): $(OBJ)
	@ar -rcs $(NAME) $(OBJ)

# Make Objects
$(OSRC)%.o: $(SRC)%.c
	@mkdir -p objs
	@cc $(CFLAG) $(HDR) -c $< -o $@

$(OSRC)%.o: $(BSRC)%.c
	@mkdir -p objs
	@cc $(CFLAG) $(HDR) -c $< -o $@

clean:
	@[ -d $(OSRC) ] && rm -rf $(OSRC) || [ -f Makefile ]

fclean:	clean
	@[ -f ./$(NAME) ] && rm $(NAME) && echo $(NAME) cleaned ||  [ -f Makefile ]

re: fclean all

.PHONY: all clean fclean re
