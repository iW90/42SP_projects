/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inwagner <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 19:00:30 by inwagner          #+#    #+#             */
/*   Updated: 2022/07/24 19:00:33 by inwagner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strstr(char *str, char *to_find);

int main(void)
{
	char	str[] = "Abacaxi";
	char	to_find[] = " aca";

	printf("ft_strstr: %s\n", ft_strstr(str, to_find));
	printf("   strstr: %s", strstr(str, to_find));
}

//gcc -Wall -Wextra -Werror *.c&& ./a.out
//norminette -R ForbiddenCheckHeaderSource