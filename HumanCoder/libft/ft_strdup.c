/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iw90 <iw90@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/09 20:47:37 by inwagner          #+#    #+#             */
/*   Updated: 2022/10/01 18:04:24 by iw90             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(char *src)
{
	char	*dup;
	size_t	len;

	len = ft_strlen(src) + 1;
	dup = (char *)ft_calloc(len, sizeof(char));
	if (!dup)
		return (0);
	ft_strlcpy(dup, src, len);
	return (dup);
}
