/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fdf_matrix_utils.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inwagner <inwagner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/10 10:16:29 by inwagner          #+#    #+#             */
/*   Updated: 2023/03/10 10:36:38 by inwagner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// PREENCHEDOR DE MATRIZ IDENTIDADE
/* Matriz identidade possui todos os seus índices da diagonal principal
 * preenchidos por 1, e os demais são preenchidos por 0.
 * Aqui foi adaptado de 1 para N a fim de poder mexer na escala posteriormente.
 */
void	fill_idMatrix(double matrix[4][4], double n)
{
	int		i;
	int		j;

	i = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			if (i == j)
				matrix[i][j] = n;
			else
				matrix[i][j] = 0;
			j++;
		}
		i++;
	}
}

// COPIADORA DE MATRIZES
void	copy_matrix(double srcm[4][4], double dstm[4][4])
{
	int		i;
	int		j;

	i = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			dstm[i][j] = srcm[i][j];
			j++;
		}
		i++;
	}
}

// MULTIPLICADOR DE MATRIZES
/* Distributiva matemática:
 * Multiplica-se cada linha por cada coluna
 * e são somados os produtos das multiplicações.
 */
void	multiply_matrix(double matA[4][4], double matB[4][4], double mProduct[4][4])
{
	int		i;
	int		j;

	i = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			mProduct[i][j] = (matA[i][0] * matB[0][j]) + (matA[i][1] * matB[1][j]) \
			+ (matA[i][2] * matB[2][j]) + (matA[i][3] * matB[3][j]);
			j++;
		}
		i++;
	}
}
