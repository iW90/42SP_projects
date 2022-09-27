/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inwagner <inwagner@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 15:05:59 by inwagner          #+#    #+#             */
/*   Updated: 2022/09/15 15:05:59 by inwagner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isnegative(int n);
int	ft_intlen(int n);

char	*ft_itoa(int n)
{
	char	*a;
	int		signal;
	int		len;

	signal = ft_isnegative(n);
	len = ft_intlen(n);
	if (signal)
		len++;
	a = (char *)malloc(sizeof(char) * len + 1);
	a[len--] = "\0";
	if (!n)
	{
		a[0] = 0;
		return (a);
	}
	if (signal)
		a[0] = '-';
	while (n)
	{
		a[len] = (n % 10) + 48;
		n /= 10;
		len--;
	}
	return (a);
}

int	ft_isnegative(int n)
{
	if (n < 0)
		return (-1);
	return (0);
}

int	ft_intlen(int n)
{
	if (n)
	{
		n /= 10;
		return (1 + ft_intlen(n));
	}
	return (1);
}
