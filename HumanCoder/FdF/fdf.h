/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fdf.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inwagner <inwagner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 11:53:04 by inwagner          #+#    #+#             */
/*   Updated: 2023/03/08 22:13:36 by inwagner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FDF_H
# define FDF_H

# include <fcntl.h>
# include <stdio.h>
# include <string.h>
# include <math.h>
# include "/usr/local/include/mlx.h"
# include "get_next_line.h"

#  define ESC_KEY 65307
#  define WIN_WIDTH 1920 /2
#  define WIN_HEIGHT 1080 /2

typedef struct s_image
{
	void	*img;
	char	*addr;
	int		bpp;
	int		llen;
	int		endian;
}	t_image;

typedef struct s_coordinates
{
	double	coord[3];
	int		z;
	int		color;
}	t_coordinates;

typedef struct s_mdata
{
	int				row;
	int				col;
	void			*wind;
	void			*mlxm;
	double			matrix[4][4];
	t_image			*image;

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
void	super_free(int rowtofree, t_mdata *m, int errn);
void	print_error(int errn);
int		define_size(t_mdata *m, int fd);
void	map_creator(t_mdata *m, int fd);
void	mlxconfig(t_mdata *m);
int		exit_fdf(t_mdata *m);
int		keyboard_commands(int nkey, t_mdata *m);
void	plotLine(t_mdata *m, t_coordinates *stt, t_coordinates *end);
void	putpixel(t_mdata *m, int x, int y, int color);
void	print_bresenham(t_mdata *m);

void	mod_coord(t_mdata *m, double mtest[4][4]);
void	dot_product(t_coordinates *c, double m[4][4]);
void	angle_matrix(double mat[4][4], double rad, char axis);
void	multiply_matrix(double matx[4][4], double maty[4][4], double res[4][4]);
void	fill_matrix(double matrix[4][4], double diag);
void	concat_matrix(double res[4][4]);

#endif