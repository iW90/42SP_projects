/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iw90 <iw90@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 15:05:59 by inwagner          #+#    #+#             */
/*   Updated: 2022/10/01 17:58:38 by iw90             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_isnegative(int n);
static int	ft_intlen(int n);

char	*ft_itoa(int n)
{
	unsigned int	num;
	int		signal;
	int		len;
	char	*str;

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
	if (!(n/10))
		return (1);
	return (1 + ft_intlen(n/10));
}