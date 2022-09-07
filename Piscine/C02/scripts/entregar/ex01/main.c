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

char	*ft_strncpy(char *dest, char *src, unsigned int n);

int	main(void)
{
	char	ft_destin[20] = "xxxxx";
	char	ft_source[20] = "aaaaaaa!";
	char	destin[20] = "xxxxx";
	char	source[20] = "aaaaaaa!";
	int		n = 5;

	printf("Destino: %s", ft_strncpy(ft_destin, ft_source, n));
	printf("\nstrncpy: %s", strncpy(destin, source, n));
}

//gcc -Wall -Wextra -Werror *.c&& ./a.out
//norminette -R ForbiddenCheckHeaderSource