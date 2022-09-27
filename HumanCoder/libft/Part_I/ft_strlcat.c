/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inwagner <inwagner@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/07 17:42:53 by inwagner          #+#    #+#             */
/*   Updated: 2022/09/10 15:03:53 by inwagner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
}
