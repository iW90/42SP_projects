/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inwagner <inwagner@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 18:08:23 by inwagner          #+#    #+#             */
/*   Updated: 2022/10/15 18:16:37 by inwagner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_isspace(int c);

int	ft_atoi(const char *strNum)
{
	size_t	i;
	size_t	number;
	int		signal;

	signal = 1;
	number = 0;
	i = 0;
	while (ft_isspace(strNum[i]))
		i++;
	if (strNum[i] == '-' || strNum[i] == '+')
	{
		if (strNum[i] == '-')
			signal = -signal;
		i++;
	}
	while (ft_isdigit(strNum[i]))
	{
		number = (number * 10) + (strNum[i] - '0');
		i++;
	}
	number *= signal;
	return (number);
}

static int	ft_isspace(int c)
{
	if (c == '\v' || c == '\f' || c == '\n' || \
		c == '\r' || c == '\t' || c == ' ')
		return (1);
	return (0);
}

/*
Converte a primeira sequência numérica de `nptr` para seu valor em `int`.
Retorna o valor convertido.
*/