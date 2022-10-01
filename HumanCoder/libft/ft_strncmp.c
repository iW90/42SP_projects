/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iw90 <iw90@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/07 17:43:02 by inwagner          #+#    #+#             */
/*   Updated: 2022/09/29 15:48:34 by iw90             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *strA, const char *strB, size_t n)
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
