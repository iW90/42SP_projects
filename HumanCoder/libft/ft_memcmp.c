/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iw90 <iw90@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/07 17:42:33 by inwagner          #+#    #+#             */
/*   Updated: 2022/10/01 21:34:01 by iw90             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *stra, const void *strb, size_t n)
{
	size_t			i;
	unsigned char	*cstra;
	unsigned char	*cstrb;

	cstra = (unsigned char *)stra;
	cstrb = (unsigned char *)strb;
	i = 0;
	while (i != n)
	{
		if (cstra[i] != cstrb[i])
			return ((int)(cstra[i] - cstrb[i]));
		i++;
	}
	return (0);
}
