/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fdf_windower.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inwagner <inwagner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/26 22:20:23 by inwagner          #+#    #+#             */
/*   Updated: 2023/03/01 22:18:35 by inwagner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

void	paint(t_mdata *m);

void	mlxconfig(t_mdata *m)
{
	m->mlxm = mlx_init(); //inicia lbx
	m->wind = mlx_new_window(m->mlxm, 800, 600, "FdF"); //cria janela
	
	mlx_hook(m->wind, 17, 0, &exit_fdf, m); //fechar no x
	mlx_hook(m->wind, 2, 1L<<0, &keyboard_commands, m); //fechar no esc
	
	paint(m);
	
	mlx_loop(m->mlxm); //mantém a tela ligada

}

void	paint(t_mdata *m)
{
	int	x;
	int	y;
	int	color;

	x = 150;
	color = 0xFFFF00;

	while (x < 156)
	{
		y = 0;
		
		while (y < 200)
		{
			mlx_pixel_put(m->mlxm, m->wind, x, y, color);
			y++;
		}
		x++;
	}
}


int	exit_fdf(t_mdata *m)
{
	mlx_destroy_window(m->mlxm, m->wind);
	mlx_destroy_display(m->mlxm);
	free(m->mlxm);
	exit(0);
	return (0);
}


int	keyboard_commands(int nkey, t_mdata *m)
{
	printf("Key: %i\n", nkey);
	if (nkey == ESC_KEY)
		exit_fdf(m);
	return (0);
}
