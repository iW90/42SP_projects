/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display_file.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 18:52:43 by coder             #+#    #+#             */
/*   Updated: 2022/08/30 18:52:45 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>

void	ft_display_file(int argument);

int	main(int argc, char *argv[])
{
	int	argument;

	if (argc < 2)
		write(2, "File name missing.\n", 19);
	else if (argc > 2)
		write(2, "Too many arguments.\n", 20);
	else
	{
		argument = open(argv[1], O_RDONLY);
		if (argument == -1)
			write(2, "Cannot read file.\n", 18);
		else
			ft_display_file(argument);
	}
	return (0);
}

void	ft_display_file(int argument)
{
	char	*buffer;

	while (read(argument, &buffer, 1))
	{
		write(1, &buffer, 1);
	}
}
