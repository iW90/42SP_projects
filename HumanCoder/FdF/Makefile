# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: inwagner <inwagner@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/25 11:52:50 by inwagner          #+#    #+#              #
#    Updated: 2023/03/07 21:04:17 by inwagner         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME	= fdf
CFLAG	= -Wall -Werror -Wextra
MFLAG	= -lbsd -lmlx -lXext -lX11 -lm
HDR		= -I ./
FTS		= fdf_parser.c fdf_dimensioner.c fdf_error.c fdf_utils.c get_next_line.c get_next_line_utils.c fdf_window.c fdf_brasenham.c fdf_draw.c fdf_matrix.c main.c
LBX		= /usr/local/lib/libmlx.a

all:
	cc ${CFLAG} ${HDR} ${FTS} ${LBX} ${MFLAG} -g -o ${NAME}

clean:
	@[ -f ./fdf ] && rm -f ./fdf || echo no fdf file

re: clean all
