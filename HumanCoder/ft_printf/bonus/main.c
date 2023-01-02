/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inwagner <inwagner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 19:58:08 by inwagner          #+#    #+#             */
/*   Updated: 2023/01/01 23:02:45 by inwagner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_printf.h"

int	main(void)
{
	size_t	ft_num;
	size_t	st_num;
	//char	*c = "42";

	write(1, "FT_PRINTF: ", 11);
	ft_num = ft_printf("%c%i", 'j', 42);
	write(1, "\n", 1);
	write(1, "ST_PRINTF: ", 11);
	st_num = printf("%c%i", 'j', 42);

	//Returns comparison
	printf("\nReturn ft_printf: %li", ft_num);
	printf("\nReturn st_printf: %li", st_num);
	printf("\n");
	return (0);
}

//cc -Wall -Wextra -Werror -I ./includes/ main.c ./src/ft_printf_aux.c ./src/ft_printf.c