/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fdf.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inwagner <inwagner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 11:53:04 by inwagner          #+#    #+#             */
/*   Updated: 2023/02/21 17:57:24 by inwagner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FDF_H
# define FDF_H

# include <fcntl.h>
# include <stdio.h>
# include <string.h>
# include "get_next_line.h"

typedef struct s_maparea
{
	int				row;
	int				col;

	t_coordinates	**coord;
}	t_maparea;

typedef struct s_coordinates
{
	int	x;
	int	y;
	int	z;
	int	color;
}	t_coordinates;

int		ft_strncmp(const char *stra, const char *strb, size_t n);
int		counter_col(char *strrow, t_maparea *m);
int		define_size(t_maparea *m, int fd);
void	print_error(int errn, t_maparea *m);
void	super_free(int rowtofree, t_maparea *m, int errn);

#endif