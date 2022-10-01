/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iw90 <iw90@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 15:11:25 by inwagner          #+#    #+#             */
/*   Updated: 2022/10/01 20:19:31 by iw90             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;
	size_t	size;

	size = ft_strlen(s1);
	i = 0;
	j = size - 1;
	while (i < j && (ft_strchr(set, s1[i]) || ft_strchr(set, s1[j])))
	{
		if (ft_strchr(set, s1[i]))
		{
			size--;
			i++;
		}
		if (ft_strchr(set, s1[j]))
		{
			size--;
			j--;
		}
	}
	return (ft_substr(s1, i, size));
}
