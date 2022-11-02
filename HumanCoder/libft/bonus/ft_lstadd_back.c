/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iw90 <iw90@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 15:21:21 by inwagner          #+#    #+#             */
/*   Updated: 2022/10/02 10:30:43 by iw90             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*lastlst;

	if (!*lst)
		*lst = new;
	else
	{
		lastlst = ft_lstlast(*lst);
		lastlst->next = new;
	}
}

/*
Adiciona um novo node no final da lista.
Retorna nada.
*/