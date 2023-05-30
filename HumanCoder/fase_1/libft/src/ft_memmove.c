/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inwagner <inwagner@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 18:10:04 by inwagner          #+#    #+#             */
/*   Updated: 2022/10/15 18:19:42 by inwagner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	char	*csrc;
	char	*cdst;

	csrc = (char *)src;
	cdst = (char *)dst;
	if (!dst && !src)
		return (0);
	if (csrc > cdst)
		ft_memcpy(cdst, csrc, n);
	else
	{
		while (n--)
			cdst[n] = csrc[n];
	}
	return (dst);
}

/*
Copia `n` bytes de `src` para `dest`.
Retorna um ponteiro para `dest`.
*/