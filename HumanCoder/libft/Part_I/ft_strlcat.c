/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iw90 <iw90@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/07 17:42:53 by inwagner          #+#    #+#             */
/*   Updated: 2022/09/29 13:58:46 by iw90             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
size_t	ft_strlcat(char *dst, const char *src, size_t len)
{
	size_t	i;
	char	*csrc;

	csrc = (char *)src;
	i = ft_strlen(dst);
	len += i;
	if (len)
	{
		while (dst[i] && csrc++ && i != (len - 1))
		{
			dst[i] = *csrc;
			i++;
		}
		dst[i] = '\0';
		return (len);
	}
	return (0);
}*/

size_t	ft_strlcat(char *dst, const char *src, size_t len)
{
	size_t	i;
	size_t	ldst;
	size_t	lsrc;
	
	ldst = ft_strlen(dst);
	lsrc = ft_strlen(src);
	if (len <= ldst)
		return (len + lsrc);
	i = 0;
	while (ldst + i != len - 1 && src[i])
	{
		dst[ldst + i] = src[i];
		i++;
	}
	dst[ldst + i] = '\0';
	return (ldst + lsrc);
}
