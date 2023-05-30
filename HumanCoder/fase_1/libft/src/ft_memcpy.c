/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inwagner <inwagner@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 18:10:00 by inwagner          #+#    #+#             */
/*   Updated: 2022/10/15 18:19:16 by inwagner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;
	char	*csrc;
	char	*cdst;

	csrc = (char *)src;
	cdst = (char *)dst;
	i = 0;
	if (n)
	{
		while (i != n)
		{
			cdst[i] = csrc[i];
			i++;
		}
	}
	return (dst);
}

/*
Copia `n` bytes de `src` para `dest`.
Retorna um ponteiro para `dest`.
*/