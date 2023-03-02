/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fdf_parser.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inwagner <inwagner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 16:09:53 by inwagner          #+#    #+#             */
/*   Updated: 2023/03/01 22:18:17 by inwagner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

void	populate_map(t_mdata *m, int fd);
void	get_info(char *strrow, t_mdata *m, int i);

void	map_creator(t_mdata *m, int fd)
{
	int	i;

	m->coord = malloc((sizeof(t_coordinates *) * m->row));
	if (!m->coord)
		super_free(0, m, -1);
	i = 0;
	while (i < m->row)
	{
		m->coord[i] = malloc((sizeof(t_coordinates) * m->col));
		if (!m->coord[i])
			super_free(i, m, -1);
		i++;
	}
	populate_map(m, fd);
}

void	populate_map(t_mdata *m, int fd)
{
	int		i;
	char	*strrow;

	i = 0;
	while (i < m->row)
	{
		strrow = get_next_line(fd);
		get_info(strrow, m, i);//
		i++;
		free(strrow);
	}
}

void	get_info(char *strrow, t_mdata *m, int i)
{
	int		j;

	j = 0;
	while (j < m->col)
	{
		while (*strrow == ' ')
			strrow++;
		if (*strrow != '\n' || *strrow != '\0')
		{
			m->coord[i][j].x = i;
			m->coord[i][j].y = j;
			m->coord[i][j].z = ft_atoi_base(strrow, 10);
			while (*strrow != ' ' && *strrow != ',' && *strrow != '\n' && *strrow != '\0')
				strrow++;
			if (*strrow == ',')
			{
				strrow = strrow + 3;
				m->coord[i][j].color = ft_atoi_base(strrow, 16);
				while (*strrow != ' ' && *strrow != '\n' && *strrow != '\0')
					strrow++;
			}
			else
				m->coord[i][j].color = 0;
		}
		j++;
	}
}
