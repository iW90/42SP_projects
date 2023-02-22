/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inwagner <inwagner@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 18:08:55 by inwagner          #+#    #+#             */
/*   Updated: 2022/11/23 02:14:08 by inwagner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

size_t	ft_strlen(const char *src)
{
	size_t	len;

	if (!src)
		return (0);
	len = 0;
	while (src[len])
		len++;
	return (len);
}

char	*ft_strchr(const char *src, int c)
{
	size_t	i;

	if (!src)
		return (NULL);
	i = 0;
	while (src[i])
	{
		if (src[i] == (char)(c))
			return ((char *)&src[i]);
		i++;
	}
	return (0);
}

char	*ft_strjoin(char *s1, char *s2)
{
	char	*joined;
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (!s1)
	{
		s1 = (char *)malloc(sizeof(char) * 1);
		s1[0] = '\0';
	}
	if (!s1 || !s2)
		return (NULL);
	joined = (char *)malloc(sizeof(char)
			* (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (joined == NULL)
		return (NULL);
	while (s1[j] != '\0')
		joined[i++] = s1[j++];
	j = 0;
	while (s2[j] != '\0')
		joined[i++] = s2[j++];
	joined[i] = '\0';
	free (s1);
	return (joined);
}
