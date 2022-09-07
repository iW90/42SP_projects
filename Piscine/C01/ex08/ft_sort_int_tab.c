/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inwagner <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/17 14:19:48 by inwagner          #+#    #+#             */
/*   Updated: 2022/07/17 14:19:49 by inwagner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_sort_int_tab(int *tab, int size);
void	swap(int *tab, int size);

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	validator;

	validator = 1;
	i = 0;
	while (validator != 0)
	{
		while (i < size - 1)
		{
			if (tab[i] > tab[i + 1])
			{
				swap(tab, size);
			}
			else
				validator = 0;
			i++;
		}
	}
}

void	swap(int *tab, int size)
{
	int	i;
	int	temp;

	i = 0;
	while (i < size - 1)
	{
		if (tab[i] > tab[i + 1])
		{
			temp = tab[i];
			tab[i] = tab[i + 1];
			tab[i + 1] = temp;
		}
		else
			i++;
	}
}
