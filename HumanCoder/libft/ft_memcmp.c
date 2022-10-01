/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iw90 <iw90@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/07 17:42:33 by inwagner          #+#    #+#             */
/*   Updated: 2022/09/30 20:13:36 by iw90             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *strA, const void *strB, size_t n)
{
	size_t	i;
	unsigned char 	*cstrA;
	unsigned char	*cstrB;

	cstrA = (unsigned char *)strA;
	cstrB = (unsigned char *)strB;
	i = 0;
	while (i != n)
	{
		if (cstrA[i] != cstrB[i])
			return ((int)(cstrA[i] - cstrB[i]));
		i++;
	}
	return (0);
}
