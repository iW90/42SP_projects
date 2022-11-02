/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inwagner <inwagner@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 18:10:41 by inwagner          #+#    #+#             */
/*   Updated: 2022/10/15 18:20:48 by inwagner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*dup;
	size_t	len;

	if (!s1)
		return (0);
	len = ft_strlen(s1) + 1;
	dup = (char *)ft_calloc(len, sizeof(char));
	if (!dup)
		return (0);
	ft_strlcpy(dup, s1, len);
	return (dup);
}

/*
Duplica a string `s`.
Retorna um ponteiro para a string criada ou retorna nulo se não houver espaço na memória.
*/