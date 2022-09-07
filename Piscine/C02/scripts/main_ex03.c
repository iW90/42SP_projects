/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ex02.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmanoel- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/22 20:21:17 by dmanoel-          #+#    #+#             */
/*   Updated: 2022/07/25 14:54:52 by dmanoel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "entregar/ex03/ft_str_is_numeric.c"

int	ft_str_is_numeric(char *str);

int main(void)
{
	if(ft_str_is_numeric("0123456789"))
		printf("Teste com a string[0123456789]\n Result >>>>> OK\n");
	else
		printf("Teste com a string[0123456789]\n Result >>>>> ERROR\n");

	if(ft_str_is_numeric("0123456789a") == 0)
		printf("Teste com a string[0123456789a]\n Result >>>> OK\n");
	else
		printf("Teste com a string[0123456789a]\n Result >>>> ERROR\n");

	printf("Teste com String vazia Se(1)Ok, Se(0) sea funcao falhou = [%d]\n", ft_str_is_numeric(""));	
}
