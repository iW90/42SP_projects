/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inwagner <inwagner@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 18:10:49 by inwagner          #+#    #+#             */
/*   Updated: 2022/10/15 18:08:52 by inwagner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	size_t	ls1;
	size_t	ls2;

	if (!s1 || !s2)
		return (0);
	ls1 = ft_strlen(s1);
	ls2 = ft_strlen(s2);
	str = (char *)ft_calloc(ls1 + ls2 + 1, sizeof(char));
	if (!str)
		return (0);
	ft_memmove(str, s1, ls1);
	ft_strlcat(str, s2, ls1 + ls2 + 1);
	return (str);
}

/*
Concatena `s1` e `s2` em outra string.
Retorna a nova string ou nulo se não conseguir alocar.
*/