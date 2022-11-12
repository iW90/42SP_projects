/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inwagner <inwagner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 18:09:26 by inwagner          #+#    #+#             */
/*   Updated: 2022/11/11 21:43:30 by inwagner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <fcntl.h>
#include "get_next_line_bonus.h"

int	main(int argc, char **argv)
{
	int		fd[3];
	char	*line0;
	char	*line1;
	char	*line2;

	(void)argc;
	fd[0] = open(argv[1], O_RDONLY);
	fd[1] = open(argv[2], O_RDONLY);
	fd[2] = open(argv[3], O_RDONLY);
	line0 = "";
	line1 = "";
	line2 = "";

	line0 = get_next_line(fd[0]);
	printf("%s", line0);

	line1 = get_next_line(fd[1]);
	printf("%s", line1);

	line2 = get_next_line(fd[2]);
	printf("%s", line2);

	line0 = get_next_line(fd[0]);
	printf("%s", line0);

	line2 = get_next_line(fd[2]);
	printf("%s", line2);

	line1 = get_next_line(fd[1]);
	printf("%s", line1);

	fd[0] = close(fd[0]);
	fd[1] = close(fd[1]);
	fd[2] = close(fd[2]);
	return (0);
}

// cc -Werror -Wextra -Wall -D BUFFER_SIZE=3 get_next_line_bonus.c get_next_line_utils_bonus.c main.c

//./a.out get_next_line.c
// ./a.out /dev/random
	/* gera numeros aleatorios */
// ./a.out /dev/tty
	/* standart input: Recebe uma entrada que nós digitamos e 
	nossa GNL deve imprimir o mesmo. Interrompa com ctrl+c */
//./a.out file0 file1 file2

//read retorna quantidade de bytes lidos
//read coloca conteúdo lido no line mallocado passado por parâmetro
