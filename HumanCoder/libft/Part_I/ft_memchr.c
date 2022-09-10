/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inwagner <inwagner@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/07 17:42:29 by inwagner          #+#    #+#             */
/*   Updated: 2022/09/10 15:34:53 by inwagner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *src, int c, size_t n)
{
	size_t		i;
	char	*str;

	i = 0;
	str = (char *)src;
	while (i != n && str[i] == c)
		i++;
}

/*
RETORNA: Retorna um ponteiro do tipo ‘void’ para primeira ocorrência do ‘c’ nos ‘n’-primeiros bytes do bloco de memória ‘src’. Caso não encontre, será retornado um ponteiro NULL, definido pela Macro da biblioteca <string.h>. Toda conversão entre char e int é feita de forma automática.
RECEBE: Uma bloco de memória fonte, um caractere que será convertido para int, um valor size_t (longo inteiro sem sinal) representando o número de bytes a serem lidos do bloco.
*/