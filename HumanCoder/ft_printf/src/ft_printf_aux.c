/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_aux.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inwagner <inwagner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/23 15:52:48 by inwagner          #+#    #+#             */
/*   Updated: 2022/12/27 21:45:29 by inwagner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_chr(char c)
{
	write(1, &c, 1);
	return (1);
}

size_t	print_str(char *str)
{
	size_t	printed;
	size_t	counter;

	printed = 0;
	counter = 0;
	if (!str)
		printed += write(1, "(null)", 6);
	else
	{
		while (str[counter] != '\0')
			counter++;
		printed = write(1, str, counter);
	}
	return (printed);
}

size_t	print_nbr(ssize_t nbr, char *base, size_t printed)
{
	if (nbr < 0)
	{
		write(1, "-", 1);
		nbr = -nbr;
		printed++;
	}
	if (nbr >= 10)
		printed = print_nbr(nbr / 10, base, printed);
	printed += write(1, &base[nbr % 10], 1);
	return (printed);
}

size_t	print_hex(size_t nbr, char *base, size_t printed)
{
	if (nbr >= 16)
		printed = print_hex(nbr / 16, base, printed);
	printed += write(1, &base[nbr % 16], 1);
	return (printed);
}

size_t	print_ptr(size_t ptr)
{
	size_t	printed;

	printed = 0;
	if (!ptr)
		printed += write(1, "(nil)", 5);
	else
	{
		printed += write(1, "0x", 2);
		printed += print_hex(ptr, "0123456789abcdef", 0);
	}
	return (printed);
}
