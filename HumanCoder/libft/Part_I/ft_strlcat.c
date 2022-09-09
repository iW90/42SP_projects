/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inwagner <inwagner@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/07 17:42:53 by inwagner          #+#    #+#             */
/*   Updated: 2022/09/07 17:42:53 by inwagner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_strlcat(char *dst, const char *src, size_t len)
{
	size_t	i;

	i = ft_strlen(dst);
	len += i;
	while (dst[i] && src && i != len)
	{
		dst[i] = src++;
		i++;
	}
	dst[i] = '\0';
}
