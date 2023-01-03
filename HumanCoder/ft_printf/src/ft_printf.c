/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inwagner <inwagner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 19:58:04 by inwagner          #+#    #+#             */
/*   Updated: 2023/01/03 10:48:28 by inwagner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *str, ...)
{
	size_t	printed;
	va_list	lst;

	if (!str)
		return (-1);
	va_start(lst, str);
	printed = read_text((char *)str, lst);
	va_end(lst);
	return (printed);
}

size_t	read_text(char *str, va_list lst)
{
	size_t	printed;

	printed = 0;
	while (*str)
	{
		if (*str == '%')
		{
			str++;
			printed += read_type((char *)str, lst);
		}
		else
			printed += write(1, &(*str), 1);
		str++;
	}
	return (printed);
}

size_t	read_type(char *str, va_list lst)
{
	size_t	printed;

	printed = 0;
	if (*str == 'c')
		printed = print_chr(va_arg(lst, int));
	else if (*str == 's')
		printed = print_str(va_arg(lst, char *));
	else if (*str == 'd' || *str == 'i')
		printed = print_nbr(va_arg(lst, int), "0123456789", 0);
	else if (*str == 'u')
		printed = print_nbr(va_arg(lst, unsigned int), "0123456789", 0);
	else if (*str == 'x')
		printed = print_hex(va_arg(lst, unsigned int), "0123456789abcdef", 0);
	else if (*str == 'X')
		printed = print_hex(va_arg(lst, unsigned int), "0123456789ABCDEF", 0);
	else if (*str == 'p')
		printed = print_ptr(va_arg(lst, size_t));
	else if (*str == '%')
		printed = write(1, "%", 1);
	return (printed);
}
