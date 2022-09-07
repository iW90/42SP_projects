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

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size);

int main(void)
{
	unsigned int		num = 3;

	char	ft_src[20] = "abc-ghi";
	char	ft_dest[20] = "deF-";
	printf("ft_strlcat: %u | Dest: %s", ft_strlcat(ft_dest, ft_src, num), ft_dest);

	char	src[20] = "abc-ghi";
	char	dest[20] = "deF-";
	printf("\n   strlcat: %lu | Dest: %s", strlcat(dest, src, num), dest);
}

//gcc -Wall -Wextra -Werror *.c&& ./a.out
//norminette -R ForbiddenCheckHeaderSource