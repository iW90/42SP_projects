/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inwagner <inwagner@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/07 17:43:05 by inwagner          #+#    #+#             */
/*   Updated: 2022/09/07 17:43:05 by inwagner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t n)
{
	size_t i;

	i = 0;
	if (little[i])
		return ((char *)&big);
	while (i != n && big[i] && little[i])
	{
		if (big[i] == little[i])
		{
			while (little[i])
			{
				if (little[i] != big[i])
				{
					
				}
			}
		}
		i++;
	}
}

/*
 If	little is an empty string, big is returned;
 if little occurs nowhere in big, NULL is returned;
 otherwise a pointer to the first character of the first occurrence of little is returned.

 The strnstr() function locates the	first occurrence of the	null-terminated string little in the string big, where not more than len characters are searched.
 Characters that appear after a `\0' character are not searched. Since the strnstr() function is a FreeBSD specific API, it should only be used when portability is not a concern.
*/

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;
	int	validator;

	if (*to_find == '\0')
		return (str);
	i = 0;
	while (str[i++] != '\0')
	{
		if (str[i] == to_find[0])
		{
			j = 0;
			validator = 0;
			while (to_find[j])
			{
				if (str[i + j] != to_find[j])
					validator = 1;
				j++;
			}
			if (validator == 0)
				return (&str[i]);
			j++;
		}
	}
	return (0);
}
