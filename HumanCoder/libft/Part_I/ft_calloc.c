/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inwagner <inwagner@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/09 20:47:34 by inwagner          #+#    #+#             */
/*   Updated: 2022/09/10 15:07:10 by inwagner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*calloc(size_t nitems, size_t size)
{
	void	*slot;

	slot = malloc(nitems * size);
	if (slot != 0)
		ft_bzero(slot, nitems * size);
}

//nitems - This is the number of elements to be allocated.
//size - This is the size of elements