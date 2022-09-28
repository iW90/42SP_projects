/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inwagner <inwagner@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/07 17:43:02 by inwagner          #+#    #+#             */
/*   Updated: 2022/09/07 17:43:02 by inwagner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *strA, const char *strB, size_t n)
{
	size_t	i;
	unsigned char 	*strAA;
	unsigned char	*strBB;

	strAA = (unsigned char *)strA;
	strBB = (unsigned char *)strB;
	i = 0;
	while (i != n)
	{
		if (strAA[i] != strBB[i])
			return ((int)(strAA[i] - strBB[i]));
		i++;
	}
	return (0);
}
