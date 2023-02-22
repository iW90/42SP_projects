/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fdf_parser.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inwagner <inwagner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 16:09:53 by inwagner          #+#    #+#             */
/*   Updated: 2023/02/21 21:32:30 by inwagner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

void	map_creator(t_maparea *m, int fd)
{
	int	i;

	i = 0;
	while (i < m->row)
	{
		m->coord[i] = (char *)malloc((sizeof(t_coordinates) * m->col));
		if (!m->coord[i])
			super_free(i, m, -1);
		i++;
	}
}

void	populate_map(t_maparea *m, int fd)
{
	int		i;
	char	*strrow;

	i = 0;
	while (i < m->row)
	{
		strrow = get_next_line(fd);
		get_info(strrow, m, i);
		i++;
		free(strrow);
	}
}

void	get_info(char *strrow, t_maparea *m, int i)
{
	int		j;
	char	*strz;
	char	*strcolor;

	j = 0;
	while (*strrow != '\n' && *strrow != '\0')
	{
		while (*strrow == ' ')
			strrow++;
		while (*strrow != ' ')
		{
			m->coord[i][j].x = i;
			m->coord[i][j].y = j;
			m->coord[i][j].z = ft_atoi_base(strrow, 10);
			while (*strrow != ' ' && strrow != ',')
				strrow++;
			if (*strrow == ',')
			{
				strrow += 3;
				m->coord[i][j].color = ft_atoi_base(strrow, 16);
				while (*strrow != ' ')
					strrow++;
			}
			else
				m->coord[i][j].color = 0;
		}
		j++;
	}
}
