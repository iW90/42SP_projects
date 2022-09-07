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

#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size);

int	main(void)
{
	int	sz;
	int	tab[7] = { 1, 2, 3, 8, 7, 9, 8 };
	int	i;

	sz = 7;
	ft_sort_int_tab(tab, sz);
	i = 0;
	while (i < sz)
	{
		printf("%i", tab[i]);
		i++;
	}
}

//gcc -Wall -Wextra -Werror *.c&& ./a.out
//norminette -R ForbiddenCheckHeaderSource