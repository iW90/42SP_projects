/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iw90 <iw90@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 15:11:21 by inwagner          #+#    #+#             */
/*   Updated: 2022/10/01 18:43:39 by iw90             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;
	size_t	slen;

	if (!s)
		return (0);
	slen = ft_strlen(s);
	if (start > slen || !len)
		return (ft_strdup(""));
	if (slen - start < len)
		len = slen - start;
	sub = (char *)ft_calloc(len + 1, sizeof(char));
	if (!sub)
		return (0);
	ft_memcpy(sub, &s[start], len);
	return (sub);
}
