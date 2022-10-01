/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iw90 <iw90@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/07 17:42:29 by inwagner          #+#    #+#             */
/*   Updated: 2022/09/30 20:10:04 by iw90             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *src, int c, size_t n)
{
	size_t	i;
	unsigned char	*str;
	unsigned char	chr;

	i = 0;
	str = (unsigned char *)src;
	chr = (unsigned char )c;
	while (i != n)
	{
		if (str[i] == chr)
			return ((void *)&str[i]);
		i++;
	}
	return (0);
}
