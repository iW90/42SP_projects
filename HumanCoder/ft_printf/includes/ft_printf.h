/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inwagner <inwagner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 19:58:04 by inwagner          #+#    #+#             */
/*   Updated: 2022/12/24 09:26:32 by inwagner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdlib.h>
# include <unistd.h>
# include <stdarg.h>

int		ft_printf(const char *str, ...);
size_t	read_type(char *str, va_list lst);

int		print_chr(char c);
size_t	print_str(char *str);
size_t	print_nbr(ssize_t nbr, char *base, size_t printed);
size_t	print_ptr(unsigned long long ptr);

#endif