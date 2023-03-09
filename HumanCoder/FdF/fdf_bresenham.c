/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fdf_bresenham.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inwagner <inwagner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 20:52:27 by inwagner          #+#    #+#             */
/*   Updated: 2023/03/08 21:14:00 by inwagner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

static void	plotDelta(t_delta *d)
{
	d->x0 = d->x1;
	d->y0 = d->y1;
	d->x1 = d->x0;
	d->y1 = d->y0;
}

static void	plotLineHigh(t_mdata *m, t_delta *d, int color)
{
	int	xi;
	int	x;
	int	y;

	d->dm = 2 * d->dx - d->dy;
	xi = 1;
	if (d->dx < 0)
	{
		xi = -1;
		d->dx = -1;
	}
	x = d->x0;
	y = d->y0;
	while (y < d->y1)
	{
		putpixel(m, x, y, color);
		if (d->dm > 0)
		{
			x = x + xi;
			d->dm = d->dm + (2 * (d->dx - d->dy));
		}
		else
			d->dm = 2 * d->dx + d->dm;
		y++;
	}
}

static void	plotLineLow(t_mdata *m, t_delta *d, int color)
{
	int	yi;
	int	x;
	int	y;

	d->dm = 2 * d->dy - d->dx;
	yi = 1;
	if (d->dy < 0)
	{
		yi = -1;
		d->dy = -1;
	}
	x = d->x0;
	y = d->y0;
	while (x < d->x1)
	{
		putpixel(m, x, y, color);
		if (d->dm > 0)
		{
			y = y + yi;
			d->dm = d->dm + (2 * (d->dy - d->dx));
		}
		else
			d->dm = 2 * d->dy + d->dm;
		x++;
	}
}

void	plotLine(t_mdata *m, t_coordinates *stt, t_coordinates *end)
{
	t_delta	d;

	d.x0 = stt->coord[0];
	d.x1 = end->coord[0];
	d.y0 = stt->coord[1];
	d.y1 = end->coord[1];
	d.dx = d.x1 - d.x0;
	d.dy = d.y1 - d.y0;
	if (abs(d.y1 - d.y0) < abs(d.x1 - d.x0))
	{
		if (d.x0 > d.x1)
		{
			plotDelta(&d);
			plotLineLow(m, &d, stt->color);
		}
		else
			plotLineLow(m, &d, stt->color);
	}
	else
	{
		if (d.y0 > d.y1)
		{
			plotDelta(&d);
			plotLineHigh(m, &d, stt->color);
		}
		else
			plotLineHigh(m, &d, stt->color);
	}
}
