/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inwagner <inwagner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 11:52:59 by inwagner          #+#    #+#             */
/*   Updated: 2023/03/10 10:42:14 by inwagner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

//void	printmap(t_mdata *ms);

int	main(int argc, char *argv[])
{
	int			fd;
	int			len;
	int			ext;
	t_mdata		mlxdata;
	t_image		img;

	/* Preenche as structs com zeros e nulls */
	mlxdata = (t_mdata) {0};
	img = (t_image) {0};
	
	/* Validação do nome do arquivo */
	if (argc != 2)
		print_error(22);
	len = ft_strlen(argv[1]);
	ext = ft_strncmp(&argv[1][len - 4], ".fdf", 5);
	if (len < 5 || ext)
		print_error(22);

	/* Mapeando dimensões */
	fd = open(argv[1], O_RDONLY);
	if (fd < 0)
		print_error(0);
	define_size(&mlxdata, fd);
	fd = close(fd);

	/* Clonando mapa */
	fd = open(argv[1], O_RDONLY);
	if (fd < 0)
		print_error(0);
		
	map_creator(&mlxdata, fd);

	/* Matrix */
	fill_idMatrix(mlxdata.matrix, 1);
	translation_matrix(mlxdata.matrix, mlxdata.row, mlxdata.col);
	concat_matrix(mlxdata.matrix);
	mod_coord(&mlxdata, mlxdata.matrix);
	
	fd = close(fd);

	/* LBX */
	mlxdata.image = &img;
	mlxconfig(&mlxdata);

	/* Drawing */
	

	/* Testes */
	//printf("row %d\n", mlxdata.row);
	//printf("col %d\n", mlxdata.col);
	//printmap(&mlxdata);
	
	return (0);
}

/*
//Teste do Parser
void	printmap(t_mdata *ms)
{
	int	i;
	int	j;
	
	i = 0;
	while (i < ms->col)
	{
		j = 0;
		{
			while (j < ms->row)
			{
				//if (ms->coord[i][j].color)
					printf("Col: %.0f | Row: %.0f | Z: %.0f | Color: %i\n", ms->coord[i][j].coord[0], ms->coord[i][j].coord[1], ms->coord[i][j].coord[2], ms->coord[i][j].color);
				j++;
			}
		}
		i++;
	}
}
*/
