/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inwagner <inwagner@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 18:11:18 by inwagner          #+#    #+#             */
/*   Updated: 2022/10/16 10:37:33 by inwagner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;
	size_t	size;

	if (!s1 || !set)
		return (0);
	size = ft_strlen(s1);
	i = 0;
	j = size - 1;
	while (ft_strchr(set, s1[i]) && s1[i])
	{
		size--;
		i++;
	}
	while (j > i && ft_strchr(set, s1[j]))
	{
		size--;
		j--;
	}
	return (ft_substr(s1, i, size));
}

/*
Copia `s1` removendo caracteres localizados em `set`.
Retorna a string criada ou nulo caso a alocação falhe.
*/