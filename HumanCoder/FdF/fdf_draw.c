/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fdf_draw.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inwagner <inwagner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/04 14:23:44 by inwagner          #+#    #+#             */
/*   Updated: 2023/03/08 22:26:16 by inwagner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

void	putpixel(t_mdata *m, int x, int y, int color)
{
	char	*brush;
	/*
	int		target;

	target = (y * m->image->llen) + (x * (m->image->bpp / 8));
	if (target < 0 || target > (WIN_HEIGHT * m->image->llen))
		return ;
	brush = m->image->addr + target;
	*/
	
	if (y > WIN_HEIGHT - 15 || y < 0 || x > m->image->llen || x < 0)
		return ;
	if (!color)
		color = 0xFFFFFF;
	brush = m->image->addr + (y * m->image->llen + x * (m->image->bpp / 8));

	*(unsigned int *)brush = color;
}

void	print_bresenham(t_mdata *m)
{
	int i;
	int	j;
	
	i = 0;
	while (i < m->col)
	{
		j = 0;
		while (j < m->row)
		{
			if ((i + 1) != m->col)
				plotLine(m, &m->coord[i][j], &m->coord[i + 1][j]);
			if ((j + 1) != m->row)
				plotLine(m, &m->coord[i][j], &m->coord[i][j + 1]);
			//printf("m->coord[%i][%i]\nX: %.0f\nY: %.0f\nZ: %.0f\n\n", i, j, m->coord[i][j].coord[0], m->coord[i][j].coord[1], m->coord[i][j].coord[2]);
			j++;
		}
		i++;
	}
}

/*
//FUNÇÃO PARA DESENHAR DIRETO (NÃO É PERMITIDO NESSE PROJETO)
void	paint(t_mdata *m)
{
	int	x;
	int	y;
	int	color;

	x = 150;
	color = 0xFF0000;

	while (x < 156)
	{
		y = 0;
		
		while (y < 200)
		{
			putpixel(m, x, y, color);
			y++;
		}
		x++;
	}
}
*/