/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inwagner <inwagner@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 18:11:30 by inwagner          #+#    #+#             */
/*   Updated: 2022/10/03 18:11:31 by inwagner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if (ft_isalpha(c) == 2)
		return (c - 32);
	return (c);
}

/*
Converte a letra `c` para maiúscula se possível.
Retorna o valor da letra convertida ou `c` caso não tenha convertido.
*/