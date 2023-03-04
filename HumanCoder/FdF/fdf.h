/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fdf.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inwagner <inwagner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 11:53:04 by inwagner          #+#    #+#             */
/*   Updated: 2023/03/04 16:10:14 by inwagner         ###   ########.fr       */
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
#  define WIN_WIDTH 1920
#  define WIN_HEIGHT 1080

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
void	print_brasenham(t_mdata *m);

#endif