/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inwagner <inwagner@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/07 17:42:33 by inwagner          #+#    #+#             */
/*   Updated: 2022/09/07 17:42:33 by inwagner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *strA, const void *strB, size_t n)
{

}

/*
RETORNA: Retorna um valor após a comparação byte-a-byte dos dois blocos de memória. De forma detalhada, a função compara o primeiro byte da fonteA com o primeiro byte da fonteB. Caso sejam iguais, ele parte para o segundo caractere. Isso se repete até que ocorra uma divergência, ou quando a quantidade ‘num’ de bytes são lidos. Diferente da função strcmp(), a leitura não é interrompida caso encontre um caractere nulo.
RECEBE: Uma bloco de memória fonteA, Uma bloco de memória fonteB, um valor size_t (longo inteiro sem sinal) representando o número de bytes a serem lidos do bloco.
*/