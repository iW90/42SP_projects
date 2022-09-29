/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iw90 <iw90@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/07 17:43:05 by inwagner          #+#    #+#             */
/*   Updated: 2022/09/29 16:52:31 by iw90             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t n)
{
	size_t	littlen;

	if ((!*big && !*little) || !*little)
		return ((char *)big);

	littlen = ft_strlen(little);
	while (*big && littlen <= n)
	{
		if (!ft_strncmp(big, little, littlen))
			return ((char *)big);
		big++;
		n--;
	}
	return (0);
}
