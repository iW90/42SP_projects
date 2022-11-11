/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inwagner <inwagner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 18:09:26 by inwagner          #+#    #+#             */
/*   Updated: 2022/11/11 20:45:28 by inwagner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <fcntl.h>
#include "get_next_line.h"

int	main(int argc, char **argv)
{
	int		fd;
	char	*line;

	(void)argc;
	fd = open(argv[1], O_RDONLY);
	line = "";
	while (line != NULL)
	{
		line = get_next_line(fd);
		printf("%s", line);
	}
	fd = close(fd);
	return (0);
}

// gcc -Werror -Wextra -Wall -D BUFFER_SIZE=5 get_next_line.c get_next_line_utils.c main.c

//./a.out get_next_line.c
// ./a.out /dev/random
	/* gera numeros aleatorios */
// ./a.out /dev/tty
	/* standart input: Recebe uma entrada que nós digitamos e 
	nossa GNL deve imprimir o mesmo. Interrompa com ctrl+c */
//./a.out file

//read retorna quantidade de bytes lidos
//read coloca conteúdo lido no line mallocado passado por parâmetro
