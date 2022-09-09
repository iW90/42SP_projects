/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inwagner <inwagner@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/07 17:42:38 by inwagner          #+#    #+#             */
/*   Updated: 2022/09/07 17:42:38 by inwagner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{

}

/*
RETORNA: Copia a quantidade ‘num’ de bytes do bloco de memória fonte para o bloco de memória de destino. Nenhuma verificação é feita, pois é executada uma cópia direta de bytes, com isso, o tipo do destino e da fonte são irrelevantes. No caso de strings, nenhuma verificação sobre o caractere terminal é feita. Para se evitar overflows, tenha certeza de que o bloco de memória comporte todos os bytes que serão copiados. Caso necessite, utilize memmove() por ser mais seguro.
RECEBE: Um bloco de memória de destino, um bloco de memória fonte, um valor size_t (longo inteiro sem sinal) representando o número de bytes a serem lidos do bloco.
*/