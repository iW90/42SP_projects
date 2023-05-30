/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inwagner <inwagner@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 18:09:56 by inwagner          #+#    #+#             */
/*   Updated: 2022/10/15 23:20:08 by inwagner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *stra, const void *strb, size_t n)
{
	size_t			i;
	unsigned char	*cstra;
	unsigned char	*cstrb;

	cstra = (unsigned char *)stra;
	cstrb = (unsigned char *)strb;
	i = 0;
	while (i != n)
	{
		if (cstra[i] != cstrb[i])
			return ((int)(cstra[i] - cstrb[i]));
		i++;
	}
	return (0);
}

/*
Compara `n` bytes de `s1` e `s2`.
Retorna a diferença entre `s1` e `s2`.
*/