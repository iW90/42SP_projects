/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isspace.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inwagner <inwagner@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/29 19:59:25 by inwagner          #+#    #+#             */
/*   Updated: 2023/05/29 20:01:38 by inwagner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isspace(int c)
{
	if (c == '\v' || c == '\f' || c == '\n' || \
		c == '\r' || c == '\t' || c == ' ')
		return (1);
	return (0);
}

/*
Verifica se o caractere é espaço.
Retorna 1 caso verdade, 0 caso falso.
*/