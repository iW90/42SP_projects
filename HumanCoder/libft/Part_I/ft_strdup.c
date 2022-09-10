/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inwagner <inwagner@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/09 20:47:37 by inwagner          #+#    #+#             */
/*   Updated: 2022/09/10 15:02:45 by inwagner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(char *src)
{
	char	*dup;
	size_t	len;

	len = ft_strlen(src) + 1;
	dup = malloc(sizeof(char) * len);
	if (!dup)
		return (0);
	ft_strlcpy(dup, src, len);
	return (src);
}
