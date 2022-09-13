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
	size_t	i;
	size_t	j;
	size_t	validator;

	if (!*little)
		return ((char *)big);
	i = 0;
	while (big[i++] && i != n)
	{
		if (big[i] == little[0])
		{
			j = 0;
			validator = 0;
			while (little[j])
			{
				if (big[i + j] != little[j])
					validator = 1;
				j++;
			}
			if (validator == 0)
				return ((char *)&big[i]);
			j++;
		}
	}
	return (0);
}

/*
 If	little is an empty string, big is returned;
 if little occurs nowhere in big, NULL is returned;
 otherwise a pointer to the first character of the first occurrence of little is returned.

 The strnstr() function locates the	first occurrence of the	null-terminated string little in the string big, where not more than len characters are searched.
 Characters that appear after a `\0' character are not searched. Since the strnstr() function is a FreeBSD specific API, it should only be used when portability is not a concern.
*/
