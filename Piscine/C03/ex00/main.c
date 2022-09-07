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

int	ft_strcmp(char *s1, char *s2);

int	main(void)
{
	char	ft_s1[] = "333";
	char	ft_s2[] = "666";
	printf("ft_cmp: %i\n", ft_strcmp(ft_s1, ft_s2));

	char	s1[] = "333";
	char	s2[] = "666";
	printf("   cmp: %i", strcmp(s1, s2));
}

//gcc -Wall -Wextra -Werror *.c&& ./a.out
//norminette -R ForbiddenCheckHeaderSource