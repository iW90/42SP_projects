/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inwagner <inwagner@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 18:28:06 by inwagner          #+#    #+#             */
/*   Updated: 2022/10/03 18:28:07 by inwagner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;
	size_t	slen;

	if (!s)
		return (0);
	slen = ft_strlen(s);
	if (start > slen || !len)
		return (ft_strdup(""));
	if (slen - start < len)
		len = slen - start;
	sub = (char *)ft_calloc(len + 1, sizeof(char));
	if (!sub)
		return (0);
	ft_memcpy(sub, &s[start], len);
	return (sub);
}

/*
Cópia parte da string `s` a partir da posição `start` até `len`.
Retorna a substring ou nulo não conseguir alocar.
*/