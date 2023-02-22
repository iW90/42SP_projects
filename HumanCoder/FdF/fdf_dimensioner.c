/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fdf_dimensioner.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inwagner <inwagner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 11:53:10 by inwagner          #+#    #+#             */
/*   Updated: 2023/02/21 17:57:37 by inwagner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

int	define_size(t_maparea *m, int fd)
{
	char	*gnlrow;

	m->row = 0;
	m->col = 0;
	gnlrow = get_next_line(fd);
	m->col = counter_col(gnlrow, m);
	free(gnlrow);
	while (gnlrow)
	{
		gnlrow = get_next_line(fd);
		if (gnlrow)
		{
			m->row++;
			free(gnlrow);
		}
	}
	if (m->row != 0)
		m->row++;
	return (0);
}

int	counter_col(char *strrow, t_maparea *m)
{
	while (*strrow != '\n' && *strrow != '\0')
	{
		while (*strrow == ' ')
			strrow++;
		if (*strrow != '\n' && *strrow != '\0')
			m->col++;
		while (*strrow != ' ' && *strrow != '\n' && *strrow != '\0')
			strrow++;
	}
	return (m->col);
}
