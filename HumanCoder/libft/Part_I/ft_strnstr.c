/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inwagner <inwagner@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/07 17:43:05 by inwagner          #+#    #+#             */
/*   Updated: 2022/09/10 13:05:22 by inwagner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t n)
{
	size_t	littlen;

	littlen = ft_strlen(little);
	while (*big && n)
	{
		if (!ft_memcmp(big, little, littlen))
			return ((char *)big);
		big++;
		n--;
	}
	return (0);
}
