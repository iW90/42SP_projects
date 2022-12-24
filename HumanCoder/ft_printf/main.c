/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inwagner <inwagner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 19:58:08 by inwagner          #+#    #+#             */
/*   Updated: 2022/12/23 15:27:24 by inwagner         ###   ########.fr       */
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
	ft_num = ft_printf("%c, %j", 'j');
	write(1, "\n", 1);
	write(1, "ST_PRINTF: ", 11);
	st_num = printf("%c, %j", 'j');

	//Returns comparison
	printf("\nReturn ft_printf: %li", ft_num);
	printf("\nReturn st_printf: %li", st_num);
	printf("\n");
	return (0);
}
