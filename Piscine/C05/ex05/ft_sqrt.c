/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inwagner <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 14:36:58 by inwagner          #+#    #+#             */
/*   Updated: 2022/07/28 14:36:59 by inwagner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb);

int	ft_sqrt(int nb)
{
	int	num;

	num = 1;
	if (nb > 0)
	{
		while (num * num <= nb)
		{
			if (num * num == nb)
				return (num);
			else if (num >= 46341)
				return (0);
			num++;
		}
	}
	return (0);
}
