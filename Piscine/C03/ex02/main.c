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

char	*ft_strcat(char *dest, char *src);

int	main(void)
{
	char	ft_src[15] = "FF";
	char	ft_dest[15] = "FF";
	printf("ft_strcat: %s\n", ft_strcat(ft_dest, ft_src));

	char	src[15] = "FF";
	char	dest[15] = "FF";
	printf("   strcat: %s", strcat(dest, src));
}

//gcc -Wall -Wextra -Werror *.c&& ./a.out
//norminette -R ForbiddenCheckHeaderSource