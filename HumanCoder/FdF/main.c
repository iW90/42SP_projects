/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inwagner <inwagner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 11:52:59 by inwagner          #+#    #+#             */
/*   Updated: 2023/02/21 21:43:36 by inwagner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

void	printmap(t_maparea *ms);

int	main(int argc, char *argv[])
{
	int			fd;
	int			len;
	int			ext;
	t_maparea	mlxdata;

	/* Validação do nome do arquivo */
	if (argc != 2)
		print_error(22, &mlxdata);
	len = ft_strlen(argv[1]);
	ext = ft_strncmp(&argv[1][len - 4], ".fdf", 5);
	if (len < 5 || ext)
		print_error(22, &mlxdata);

	/* Mapeando dimensões */
	fd = open(argv[1], O_RDONLY);
	if (fd < 0)
		print_error(0, &mlxdata);
	define_size(&mlxdata, fd);
	fd = close(fd);

	/* Clonando mapa */
	fd = open(argv[1], O_RDONLY);
	if (fd < 0)
		print_error(0, &mlxdata);

	fd = close(fd);

	/* Testes */
	printf("row %d\n", mlxdata.row);
	printf("col %d\n", mlxdata.col);

	return (0);
}

/* Teste */
void	printmap(t_maparea *ms)
{
	int	i;
	int	j;
	
	i = 0;
	while (i < ms->row)
	{
		j = 0;
		{
			while (j < ms->col)
			{
				//if (ms->coord[i][j].color)
					ft_printf("Row: %i Col: %i has Z of: %i and Color of %i\n", ms->coord[i][j].x, ms->coord[i][j].y, ms->coord[i][j].z, ms->coord[i][j].color);
				j++;
			}
		}
		i++;
	}
}
