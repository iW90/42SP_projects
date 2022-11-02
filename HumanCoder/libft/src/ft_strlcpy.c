/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inwagner <inwagner@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 18:10:56 by inwagner          #+#    #+#             */
/*   Updated: 2022/10/03 18:10:57 by inwagner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t len)
{
	size_t	i;
	size_t	lsrc;

	if (!dst || !src)
		return (0);
	if (len)
	{
		i = 0;
		while (i != (len - 1) && src[i])
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	lsrc = ft_strlen(src);
	return (lsrc);
}

/*
Copia até `size - 1` bytes de `src` para `dst` adicionando um nulo no final.
Retorna o tamanho total da string que tentou criar.
*/