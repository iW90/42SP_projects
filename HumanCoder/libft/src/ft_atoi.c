/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iw90 <iw90@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/07 17:41:54 by inwagner          #+#    #+#             */
/*   Updated: 2022/09/29 14:46:16 by iw90             ###   ########.fr       */
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
