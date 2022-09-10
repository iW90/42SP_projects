/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inwagner <inwagner@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/07 17:42:41 by inwagner          #+#    #+#             */
/*   Updated: 2022/09/10 15:36:05 by inwagner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	size_t		i;
	char	*csrc;
	char	*cdst;
	char	*temp;

	csrc = (char *)src;
	cdst = (char *)dest;
	i = 0;
	while (i != n)
	{
		temp[i] = csrc[i];
		cdest[i] = temp[i];
		i++;
	}
}

/*
RETORNA: Move a quantidade ‘num’ de bytes do bloco de memória fonte para o bloco de memória de destino. Nenhuma verificação é feita, pois é executada uma cópia direta de bytes para um buffer intermediário, assim, podendo se sobrepor com isso, o tipo do destino e da fonte são irrelevantes. No caso de strings, nenhuma verificação sobre o caractere terminal é feita. Para se evitar overflows, tenha certeza de que o bloco de memória comporte todos os bytes que serão movidos.
RECEBE: Um bloco de memória de destino, um bloco de memória fonte, um valor size_t (longo inteiro sem sinal) representando o número de bytes a serem lidos do bloco.
*/