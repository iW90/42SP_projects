/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fdf_window.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inwagner <inwagner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/26 22:20:23 by inwagner          #+#    #+#             */
/*   Updated: 2023/03/08 21:28:39 by inwagner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

//void	paint(t_mdata *m);

void	mlxconfig(t_mdata *m)
{
	m->mlxm = mlx_init(); //inicia lbx
	m->wind = mlx_new_window(m->mlxm, WIN_WIDTH, WIN_HEIGHT, "FdF"); //cria janela

	m->image->img = mlx_new_image(m->mlxm, WIN_WIDTH, WIN_HEIGHT); //cria a caixinha de desenho

	mlx_hook(m->wind, 17, 0, &exit_fdf, m); //fechar no x
	mlx_hook(m->wind, 2, 1L<<0, &keyboard_commands, m); //fechar no esc

	// endereço e atributos da janelinha
	m->image->addr = mlx_get_data_addr(m->image->img, \
	&m->image->bpp, &m->image->llen, &m->image->endian);
	printf("Bpp: %i\nLlen: %i\n", m->image->bpp, m->image->llen);

	//paint(m);
	print_bresenham(m);
	
	mlx_put_image_to_window(m->mlxm, m->wind, m->image->img, 10, 10); //coloca a imagem
	mlx_loop(m->mlxm); //mantém a tela ligada
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
