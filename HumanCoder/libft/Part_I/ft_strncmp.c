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

	i = 0;
	while ((strA[i] && strB[i]) && i != n)
	{
		if (strA[i] != strB[i])
			return ((int)(strA[i] - strB[i]));
		i++;
	}
	return (0);
}
