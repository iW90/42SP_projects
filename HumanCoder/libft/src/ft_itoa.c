/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inwagner <inwagner@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 18:09:11 by inwagner          #+#    #+#             */
/*   Updated: 2022/10/03 18:09:12 by inwagner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_isnegative(int n);
static int	ft_intlen(int n);

char	*ft_itoa(int n)
{
	unsigned int	num;
	int				signal;
	int				len;
	char			*str;

	signal = ft_isnegative(n);
	num = n * signal;
	len = ft_intlen(num);
	if (signal == -1)
		len++;
	str = (char *)ft_calloc(len + 1, sizeof(char));
	if (!str)
		return (0);
	len--;
	if (!num)
		str[0] = '0';
	if (signal == -1)
		str[0] = '-';
	while (num)
	{
		str[len--] = (num % 10) + '0';
		num /= 10;
	}
	return (str);
}

static int	ft_isnegative(int n)
{
	if (n < 0)
		return (-1);
	return (1);
}

static int	ft_intlen(int n)
{
	if (!(n / 10))
		return (1);
	return (1 + ft_intlen(n / 10));
}

/*
Transforma o `n` número inserido em uma string.
Retorna a string ou nulo se a alocação falhar.
*/