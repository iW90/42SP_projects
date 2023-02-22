# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: inwagner <inwagner@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/25 11:52:50 by inwagner          #+#    #+#              #
#    Updated: 2023/02/22 09:41:39 by inwagner         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME	= fdf
FLAG	= -Wall -Werror -Wextra
HDR		= -I ./
FTS		= fdf_parser.c fdf_dimensioner.c fdf_error.c fdf_utils.c get_next_line.c get_next_line_utils.c main.c

all:
	cc ${FLAG} ${HDR} -g ${FTS} -o ${NAME}

clean:
	@[ -f ./fdf ] && rm -f ./fdf || echo no fdf file

re: clean all
