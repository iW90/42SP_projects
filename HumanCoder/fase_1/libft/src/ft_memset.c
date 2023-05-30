/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inwagner <inwagner@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 18:10:08 by inwagner          #+#    #+#             */
/*   Updated: 2022/10/15 23:15:40 by inwagner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *src, int c, size_t n)
{
	size_t	i;
	char	*str;

	str = (char *)src;
	i = 0;
	if (n)
	{
		while (i != n)
		{
			str[i] = (char)c;
			i++;
		}
	}
	return (src);
}

/*
Copia o caractere `c` para os primeiros `n` caracteres em `*str`.
Retorna o ponteiro `str`.
*/