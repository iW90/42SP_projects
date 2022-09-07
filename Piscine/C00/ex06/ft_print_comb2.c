/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inwagner <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 15:42:46 by inwagner          #+#    #+#             */
/*   Updated: 2022/07/13 15:42:47 by inwagner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb2(void);
void	print(int num);

void	ft_print_comb2(void)
{
	int	first_num;
	int	last_num;

	first_num = 0;
	last_num = 1;
	while (first_num <= 98)
	{
		while (last_num <= 99)
		{
			print(first_num);
			write(1, " ", 1);
			print(last_num);
			if (first_num != 98)
			{
				write(1, ", ", 2);
			}
			last_num++;
		}
		first_num++;
		last_num = first_num + 1;
	}
}

void	print(int num)
{
	int	unidade;
	int	dezena;

	if (num <= 9)
	{
		unidade = num + 48;
		write(1, "0", 1);
		write(1, &unidade, 1);
	}
	else
	{
		unidade = (num % 10) + 48;
		dezena = (num / 10) + 48;
		write(1, &dezena, 1);
		write(1, &unidade, 1);
	}
}
