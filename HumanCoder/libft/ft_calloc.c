/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iw90 <iw90@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/09 20:47:34 by inwagner          #+#    #+#             */
/*   Updated: 2022/09/30 19:48:27 by iw90             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nitems, size_t size)
{
	void	*dst;

	if (!nitems || !size || size > SIZE_MAX/nitems)
		return (0);
	dst = malloc(nitems * size);
	if (!dst)
		return (0);
	ft_bzero(dst, nitems * size);
	return (dst);
}
