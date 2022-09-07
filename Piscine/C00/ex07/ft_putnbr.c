/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inwagner <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 15:42:53 by inwagner          #+#    #+#             */
/*   Updated: 2022/07/13 15:42:54 by inwagner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb);
void	builder(unsigned int num);
int		potent(unsigned int n);
void	print(int c);

void	ft_putnbr(int nb)
{
	unsigned int	num;

	if (nb < 0)
	{
		print('-');
		num = nb * (-1);
		builder(num);
	}
	else if (nb == 0)
		print('0');
	else
	{
		num = nb;
		builder(num);
	}
}

void	builder(unsigned int num)
{
	while (num != 0)
	{
		print((num / potent(num)) + 48);
		num -= (num / potent(num) * potent(num));
	}
}

int	potent(unsigned int n)
{
	int	pot;

	pot = 1;
	while (n / 10 != 0)
	{
		pot *= 10;
		n /= 10;
	}
	return (pot);
}

void	print(int c)
{
	write(1, &c, 1);
}
