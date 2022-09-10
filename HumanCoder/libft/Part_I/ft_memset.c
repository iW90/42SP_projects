/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inwagner <inwagner@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/07 17:18:26 by inwagner          #+#    #+#             */
/*   Updated: 2022/09/10 14:46:57 by inwagner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(const void *src, int c, size_t n)
{
	size_t	i;
	char	*str;

	str = (char *)src;
	i = 0;
	if (n != 0)
	{
		while (i != n)
		{
			str[i] = c;
			i++;
		}
	}
}

/*
RETORNA: Substitui os ‘n’ primeiros bytes do bloco de memória ‘src’ pelo ‘c’. Por ser uma substituição direta do bloco de byte, é possível sobrescrever o caractere terminal.
RECEBE: Uma bloco de memória fonte, um caractere que será convertido para int, um valor size_t (longo inteiro sem sinal) representando o número de bytes a serem lidos do bloco.
*/