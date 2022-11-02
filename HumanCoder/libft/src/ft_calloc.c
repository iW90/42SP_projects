/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inwagner <inwagner@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 18:08:48 by inwagner          #+#    #+#             */
/*   Updated: 2022/10/15 22:06:24 by inwagner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nitems, size_t size)
{
	void	*dst;

	if (!nitems || !size || size > INT_MAX / nitems)
		return (0);
	dst = malloc(nitems * size);
	if (!dst)
		return (0);
	ft_bzero(dst, nitems * size);
	return (dst);
}

/*
Aloca memória para `nitems` até `size` enchendo de 0.
Retorna um ponteiro se `nitems` e `size` são não-zero, retorna nulo caso `nitems` ou `size` for igual a 0.
*/