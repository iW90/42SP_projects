/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fdf_windower.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inwagner <inwagner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/26 22:20:23 by inwagner          #+#    #+#             */
/*   Updated: 2023/02/26 22:50:33 by inwagner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

void	mlxconfig(t_maparea *m)
{
	m->mlxm = mlx_init();
	m->wind = mlx_new_window(m->mlxm, 800, 600, "FdF");
	mlx_hook(m->wind, 17, 0, &exit_fdf, m);
	mlx_loop(m->mlxm);
	
}
