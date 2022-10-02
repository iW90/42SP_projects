/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iw90 <iw90@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/07 17:43:09 by inwagner          #+#    #+#             */
/*   Updated: 2022/10/01 18:48:14 by iw90             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *src, int c)
{
	long int	i;

	if (!c)
		return ((char *)&src[(long int)ft_strlen(src)]);
	i = ft_strlen(src);
	while (i >= 0)
	{
		if (src[i] == (char)(c))
			return ((char *)&src[i]);
		i--;
	}
	return (0);
}
