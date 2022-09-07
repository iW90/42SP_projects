/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inwagner <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 15:39:47 by inwagner          #+#    #+#             */
/*   Updated: 2022/07/13 15:39:49 by inwagner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb(void);
void	dont_repeat(char n[3]);
void	pontuation(char point);

void	ft_print_comb(void)
{
	char	num[3];

	num[0] = '0';
	num[1] = '0';
	num[2] = '0';
	while (num[0] <= '7')
	{
		while (num[1] <= '8')
		{
			while (num[2] <= '9')
			{
				dont_repeat(num);
				num[2]++;
			}
			num[2] = '0';
			num[1]++;
		}
		num[1] = '0';
		num[0]++;
	}
}

void	dont_repeat(char n[3])
{
	if (n[0] != n[1] && n[0] != n[2] && n[1] != n[2])
	{
		if (n[0] < n[1] && n[1] < n[2])
		{
			write(1, &n[0], 1);
			write(1, &n[1], 1);
			write(1, &n[2], 1);
			pontuation(n[0]);
		}
	}
}

void	pontuation(char endpoint)
{
	if (endpoint != '7')
	{
		write(1, ", ", 2);
	}
}
