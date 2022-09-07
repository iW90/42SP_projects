/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inwagner <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 08:48:10 by inwagner          #+#    #+#             */
/*   Updated: 2022/07/28 09:14:09 by inwagner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_rev_params(char argv[]);

int	main(int argc, char *argv[])
{
	int	i;

	i = argc - 1;
	while (i >= 1)
	{
		ft_rev_params(argv[i]);
		i--;
	}
	return (0);
}

void	ft_rev_params(char argv[])
{
	int	i;

	i = 0;
	while (argv[i] != '\0')
	{
		write (1, &argv[i], 1);
		i++;
	}
	write (1, "\n", 1);
}
