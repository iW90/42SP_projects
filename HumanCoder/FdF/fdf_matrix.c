/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fdf_matrix.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inwagner <inwagner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 21:37:24 by inwagner          #+#    #+#             */
/*   Updated: 2023/03/09 21:48:36 by inwagner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "fdf.h"

void	fill_matrix(double matrix[4][4], double diag)
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
				matrix[i][j] = diag;
			else
				matrix[i][j] = 0;
			j++;
		}
		i++;
	}
}

void	multiply_matrix(double matx[4][4], double maty[4][4], double res[4][4])
{
	int		i;
	int		j;

	i = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			res[i][j] = matx[i][0] * maty[0][j] + matx[i][1] * maty[1][j] + \
			matx[i][2] * maty[2][j] + matx[i][3] * maty[3][j];
			j++;
		}
		i++;
	}
}

void	copy_matrix(double matrix[4][4], double copy[4][4])
{
	int		i;
	int		j;

	i = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			copy[i][j] = matrix[i][j];
			j++;
		}
		i++;
	}
}

void	angle_matrix(double mat[4][4], double rad, char axis)
{
	if (axis == 'x')
	{
		mat[1][1] = cos(rad);
		mat[1][2] = sin(rad);
		mat[2][1] = -sin(rad);
		mat[2][2] = cos(rad);
	}
	if (axis == 'y')
	{
		
		mat[0][0] = cos(rad);
		mat[0][2] = -sin(rad);
		mat[2][0] = sin(rad);
		mat[2][2] = cos(rad);
	}
	if (axis == 'z')
	{
		mat[0][0] = cos(rad);
		mat[0][1] = sin(rad);
		mat[1][0] = -sin(rad);
		mat[1][1] = cos(rad);
	}
}

void	dot_product(t_coordinates *c, double m[4][4])
{
	double	temp[3];

	temp[0] = c->coord[0];
	temp[1] = c->coord[1];
	temp[2] = c->coord[2];

	temp[0] = c->coord[0] * m[0][0] + c->coord[1] * m[1][0] + \
    c->coord[2] * m[2][0] + 1 * m[3][0];
	temp[1] = c->coord[0] * m[0][1] + c->coord[1] * m[1][1] + \
    c->coord[2] * m[2][1] + 1 * m[3][1];
	temp[2] = c->coord[0] * m[0][2] + c->coord[1] * m[1][2] + \
    c->coord[2] * m[2][2] + 1 * m[3][2];

	c->coord[0] = temp[0];
	c->coord[1] = temp[1];
	c->coord[2] = temp[2];
}

void	mod_coord(t_mdata *m, double mtest[4][4])
{
	int		i;
	int		j;

	i = 0;
	while (i < m->col)
	{
		j = 0;
		while (j < m->row)
		{
			dot_product(&m->coord[i][j], mtest);
			j++;
		}
		i++;
	}
}

void	concat_matrix(double res[4][4])
{
	double	mz[4][4];
	//double	mx[4][4];
	double	rescopy[4][4];

	copy_matrix(res, rescopy);
	fill_matrix(mz, 1);
	angle_matrix(mz, M_PI * 0.25, 'z'); //45
	multiply_matrix(rescopy, mz, res);
	copy_matrix(res, rescopy);
	fill_matrix(mz, 1);
	angle_matrix(mz, M_PI * 0.304, 'x'); //54,736 //35,264 (argtg(30))
	multiply_matrix(rescopy, mz, res);
	copy_matrix(res, rescopy);
	fill_matrix(mz, 25);
	mz[3][3] = 1;
	multiply_matrix(rescopy, mz, res);
	//multiply_matrix(mz, mx, res);
	
}
void	translation_matrix(double res[4][4], int row, int col)
{
	res[3][0] = row; //x
	res[3][1] = -col; //y
	res[3][2] = -row; //z
	res[2][2] = 0.05;//ajuste da escala de Z
}


/*
void	translation_matrix(double res[4][4])
{
	double	mtrans[4][4];
	double	mescale[4][4];
	
	fill_matrix(mtrans, 1);
	mtrans[3][0] = 20; //x
	mtrans[3][1] = -10; //y
	mtrans[3][2] = 3; //z

	fill_matrix(mescale, 1);
	mescale[3][3] = 1;
	
	multiply_matrix(mtrans, mescale, res);
}
*/

