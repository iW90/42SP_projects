/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inwagner <inwagner@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/07 17:18:26 by inwagner          #+#    #+#             */
/*   Updated: 2022/09/07 17:18:26 by inwagner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(const void *src, int c, size_t n)
{
	size_t i;

	i = 0;
	while (i != n)
	{
		write (1, &c, 1);
		i++;
	}
	while (&src[i])
	{
		write (1, &src[i], 1);
		i++;
	}
}


/*
RETORNA: Substitui os ‘n’ primeiros bytes do bloco de memória ‘src’ pelo ‘c’. Por ser uma substituição direta do bloco de byte, é possível sobrescrever o caractere terminal.
RECEBE: Uma bloco de memória fonte, um caractere que será convertido para int, um valor size_t (longo inteiro sem sinal) representando o número de bytes a serem lidos do bloco.
*/