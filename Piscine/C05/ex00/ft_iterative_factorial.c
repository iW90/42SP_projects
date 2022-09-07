/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inwagner <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 14:35:49 by inwagner          #+#    #+#             */
/*   Updated: 2022/07/28 14:35:51 by inwagner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb);

int	ft_iterative_factorial(int nb)
{
	int	i;
	int	factorial;

	factorial = 1;
	if (nb == 1 || nb == 0)
		return (1);
	i = 1;
	while (i <= nb)
	{
		factorial *= i;
		i++;
	}
	if (nb < 0)
		return (0);
	return (factorial);
}
