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

void	ft_ultimate_div_mod(int *a, int *b);

int	main(void)
{
	int	*a;
	int	*b;
	int	aa;
	int	bb;

	aa = 8;
	bb = 6;
	a = &aa;
	b = &bb;
	ft_ultimate_div_mod(a, b);
	printf("aa: %d | bb: %d", aa, bb);
}

//gcc -Wall -Wextra -Werror *.c&& ./a.out
//norminette -R ForbiddenCheckHeaderSource