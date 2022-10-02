/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iw90 <iw90@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/07 17:42:41 by inwagner          #+#    #+#             */
/*   Updated: 2022/09/29 17:11:28 by iw90             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	char	*csrc;
	char	*cdst;

	csrc = (char *)src;
	cdst = (char *)dst;
	if (!dst && !src)
		return (0);
	if (csrc > cdst)
		ft_memcpy(cdst, csrc, n);
	else
	{
		while (n--)
			cdst[n] = csrc[n];
	}
	return (dst);
}
