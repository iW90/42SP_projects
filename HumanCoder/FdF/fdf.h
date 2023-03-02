/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fdf.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inwagner <inwagner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 11:53:04 by inwagner          #+#    #+#             */
/*   Updated: 2023/03/01 22:18:44 by inwagner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FDF_H
# define FDF_H

# include <fcntl.h>
# include <stdio.h>
# include <string.h>
# include "/usr/local/include/mlx.h"
# include "get_next_line.h"

#  define ESC_KEY 65307

typedef struct s_coordinates
{
	int	x;
	int	y;
	int	z;
	int	color;
}	t_coordinates;

typedef struct s_mdata
{
	int				row;
	int				col;
	void			*wind;
	void			*mlxm;

	t_coordinates	**coord;
}	t_mdata;

typedef struct s_delta
{
	int	dx;
	int	dy;
	int	dm;
	int	x0;
	int	x1;
	int	y0;
	int	y1;
}	t_delta;


int		ft_strncmp(const char *stra, const char *strb, size_t n);
int		ft_atoi_base(const char *str, int str_base);
int		counter_col(char *strrow, t_mdata *m);
int		define_size(t_mdata *m, int fd);
void	print_error(int errn);
void	super_free(int rowtofree, t_mdata *m, int errn);
void	map_creator(t_mdata *m, int fd);
void	mlxconfig(t_mdata *m);
int		exit_fdf(t_mdata *m);
int		keyboard_commands(int nkey, t_mdata *m);
void	plotLine(t_delta *d, t_coordinates *stt, t_coordinates *end);

#endif