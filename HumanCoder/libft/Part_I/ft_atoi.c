/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inwagner <inwagner@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/07 17:41:54 by inwagner          #+#    #+#             */
/*   Updated: 2022/09/10 15:00:26 by inwagner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_isspace(int c);

int	ft_atoi(const char *strNum)
{
	int	i;
	int	signal;
	int	number;

	signal = 1;
	number = 0;
	i = 0;
	while (ft_isspace(strNum[i]))
		i++;
	if (strNum[i] == '-')
	{
		signal *= -1;
		i++;
	}
	if (strNum[i] == '+')
		i++;
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
