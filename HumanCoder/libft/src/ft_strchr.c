/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iw90 <iw90@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/07 17:42:49 by inwagner          #+#    #+#             */
/*   Updated: 2022/10/01 18:31:10 by iw90             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *src, int c)
{
	size_t	i;

	if (!c)
		return ((char *)&src[ft_strlen(src)]);
	i = 0;
	while (src[i])
	{
		if (src[i] == (char)(c))
			return ((char *)&src[i]);
		i++;
	}
	return (0);
}
