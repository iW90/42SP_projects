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

#include <stdio.h>

int	ft_sqrt(int nb);

int	main()
{
	int	i;

	i = 2147395600;
	printf("A raíz quadrada de %i é %i", i, ft_sqrt(i));
}

//gcc -Wall -Wextra -Werror *.c&& ./a.out
//norminette -R ForbiddenCheckHeaderSource

/* SAÍDAS
* Se a raíz não for um inteiro: retornar null;
* Se a raíz for um inteiro: retornar a raíz;
* Maior número inteiro positivo é: 2.147.483.647
* 	portanto, a maior raíz é de 2.147.395.600 (que é 46.340)
*/