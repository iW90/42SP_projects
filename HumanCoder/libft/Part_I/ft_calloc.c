/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inwagner <inwagner@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/09 20:47:34 by inwagner          #+#    #+#             */
/*   Updated: 2022/09/09 20:47:34 by inwagner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *calloc(size_t nitems, size_t size)
{
	void	*ting;

	ting = malloc(nitems * size);

	ft_bzero(ting, nitems * size);

}

//nitems - This is the number of elements to be allocated.
//size - This is the size of elements