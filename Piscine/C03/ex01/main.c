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

int	ft_strncmp(char *s1, char *s2, unsigned int n);

int	main(void)
{
	unsigned int		num = 1;

	char	ft_s1[] = "ab";
	char	ft_s2[] = "";
	printf("ft_ncmp: %i\n", ft_strncmp(ft_s1, ft_s2, num));

	char	s1[] = "ab";
	char	s2[] = "";
	printf("   ncmp: %i", strncmp(s1, s2, num));
}

//gcc -Wall -Wextra -Werror *.c&& ./a.out
//norminette -R ForbiddenCheckHeaderSource