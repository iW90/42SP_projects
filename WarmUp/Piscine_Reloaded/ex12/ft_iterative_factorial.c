/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 01:47:01 by coder             #+#    #+#             */
/*   Updated: 2022/08/31 01:18:01 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	factorial;

	if (nb == 1 || nb == 0)
		return (1);
	else if (nb > 1 && nb < 13)
	{
		factorial = 1;
		while (nb != 1)
		{
			factorial *= nb;
			nb--;
		}
		return (factorial);
	}
	else
		return (0);
}
