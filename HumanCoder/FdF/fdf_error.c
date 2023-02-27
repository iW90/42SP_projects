/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fdf_error.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inwagner <inwagner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 17:01:05 by inwagner          #+#    #+#             */
/*   Updated: 2023/02/26 22:56:20 by inwagner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

void	print_error(int errn)
{
	if (errn == -1)
		perror("");
	else
		write(2, strerror(errn), ft_strlen(strerror(errn)));
	write(2, "\n", 1);
	exit(-1);
}

void	super_free(int rowtofree, t_maparea *m, int errn)
{
	int	i;

	i = 0;
	while (i < rowtofree)
	{
		free(m->coord[i]);
		i++;
	}
	print_error(errn);
}

int	exit_fdf(t_maparea *m)
{
	mlx_destroy_window(m->mlxm, m->wind);
	mlx_destroy_display(m->mlxm);
	free(m->mlxm);
	exit(0);
	return (0);
}
