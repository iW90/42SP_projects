/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ex02.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmanoel- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/22 20:21:17 by dmanoel-          #+#    #+#             */
/*   Updated: 2022/07/24 15:48:30 by dmanoel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "entregar/ex02/ft_str_is_alpha.c"

int	ft_str_is_alpha(char *str);

int main(void)
{
	// -------
	if(ft_str_is_alpha("abcdefghijklmnopqrstuvxwyzABCDEFGHIJKLMNOPQRSTUVXWYZ"))
		printf("Teste com a string[abcdefghijklmnopqrstuvxwyzABCDEFGHIJKLMNOPQRSTUVXWYZ]\nResult >>>>> OK\n");
	else
		printf("Teste com a string[abcdefghijklmnopqrstuvxwyzABCDEFGHIJKLMNOPQRSTUVXWYZ]\nResult >>>>> ERROR\n");

	// -------	
	if(ft_str_is_alpha("abcdefghijklmn1pqrstuvxwyzABCDEFGHIJKLMNOPQRSTUVXWYZ") == 0)
		printf("Teste com a string[abcdefghijklmnopqrstuvxwy1ABCDEFGHIJKLMNOPQRSTUVXWYZ] (tem um 1 no meio)\nResult >>>>> OK\n");
	else
		printf("Teste com a string[abcdefghijklmnopqrstuvxwy1ABCDEFGHIJKLMNOPQRSTUVXWYZ] (tem um 1 no meio)\nResult >>>>> ERROR\n");
	
	// -------
	if(ft_str_is_alpha("") == 1)
		printf("Teste com a string vazia \"\"\nResult >>>>> OK\n");
	else 
		printf("Teste com a string vazia \"\"\nResult >>>>> ERROR\n");

}
