/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inwagner <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 14:10:08 by inwagner          #+#    #+#             */
/*   Updated: 2022/07/19 14:10:13 by inwagner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size);

int	main(void)
{
	char	ft_destin[20] = "xxxxxxxxx";
	char	ft_source[20] = "aaaaaaa!";
	char	destin[20] = "xxxxxxxxx";
	char	source[20] = "aaaaaaa!";
	unsigned int	n = 0;

	printf("Destino: %u | %s", ft_strlcpy(ft_destin, ft_source, n), ft_destin);
	printf("\nstrlcpy: %lu | %s", strlcpy(destin, source, n), destin);
}

//gcc -Wall -Wextra -Werror *.c&& ./a.out
//norminette -R ForbiddenCheckHeaderSource