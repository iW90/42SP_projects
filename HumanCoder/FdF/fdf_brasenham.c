/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fdf_brasenham.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inwagner <inwagner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 20:52:27 by inwagner          #+#    #+#             */
/*   Updated: 2023/03/01 22:11:18 by inwagner         ###   ########.fr       */
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

static void	plotLineHigh(t_delta *d)
{
	int	xi;
	int	x;
	int	y;

	d->dm = 2 * d->dy - d->dx;
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
		//putpixel(x, y, 7);
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

static void	plotLineLow(t_delta *d)
{
	int	yi;
	int	x;
	int	y;

	d->dm = 2 * d->dx - d->dy;
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
		//putpixel(x, y, 7);
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

void	plotLine(t_delta *d, t_coordinates *stt, t_coordinates *end)
{
	d->x0 = stt->x;
	d->x1 = end->x;
	d->y0 = stt->y;
	d->y1 = end->y;
	d->dx = d->x1 - d->x0;
	d->dy = d->y1 - d->y0;
	if (abs(d->y1 - d->y0) < abs(d->x1 - d->x0))
	{
		if (d->x0 > d->x1)
		{
			plotDelta(d);
			plotLineLow(d);
		}
		else
			plotLineLow(d);
	}
	else
	{
		if (d->y0 > d->y1)
		{
			plotDelta(d);
			plotLineHigh(d);
		}
		else
			plotLineHigh(d);
	}
}
