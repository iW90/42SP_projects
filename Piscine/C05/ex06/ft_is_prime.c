/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inwagner <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 14:37:08 by inwagner          #+#    #+#             */
/*   Updated: 2022/07/28 14:37:44 by inwagner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb);

int	ft_is_prime(int nb)
{
	int	i;
	int	is_prime;

	is_prime = 0;
	if (nb < 2)
		return (0);
	i = 1;
	while (i <= nb)
	{
		if (nb % i == 0)
		{
			is_prime++;
		}
		i++;
	}
	if (is_prime > 2)
		return (0);
	else
		return (1);
}
