/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inwagner <inwagner@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 18:25:16 by inwagner          #+#    #+#             */
/*   Updated: 2022/10/15 18:08:00 by inwagner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_substrcounter(char const *s, char c);
static int	ft_substrlen(char const *s, int start, char c);

char	**ft_split(char const *str, char c)
{
	int		i;
	int		substrl;
	int		start;
	int		nsubs;
	char	**pbox;

	if (!str)
		return (0);
	nsubs = ft_substrcounter(str, c);
	pbox = (char **)ft_calloc((nsubs + 1), sizeof(char *));
	if (!pbox)
		return (0);
	start = 0;
	i = 0;
	while (i < nsubs)
	{
		while (str[start] && str[start] == c)
			start++;
		substrl = ft_substrlen(str, start, c);
		pbox[i] = ft_substr(str, start, substrl);
		start += substrl;
		i++;
	}
	return (pbox);
}

static int	ft_substrcounter(char const *str, char c)
{
	int	i;
	int	count;

	count = 0;
	i = 0;
	while (str[i])
	{
		while (str[i] == c && str[i])
			i++;
		if (str[i])
			count++;
		while (str[i] != c && str[i])
			i++;
	}
	return (count);
}

static int	ft_substrlen(char const *s, int start, char c)
{
	int	len;

	len = 0;
	while (s[start] != c && s[start])
	{
		start++;
		len++;
	}
	return (len);
}

/*
Picota `s` em várias strings utilizando `c` como um delimitador, deve ter nulo em cada string.
Retorna as strings ou nulo se a alocação falhar.
*/