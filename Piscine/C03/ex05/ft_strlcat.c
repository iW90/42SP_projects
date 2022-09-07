/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inwagner <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 19:07:43 by inwagner          #+#    #+#             */
/*   Updated: 2022/07/24 19:07:44 by inwagner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size);

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	num;
	unsigned int	i;

	num = 0;
	while (dest[num] != '\0')
		num++;
	i = 0;
	while (i < (size - 1) && (dest[i] != '\0' && src[i] != '\0'))
	{
		dest[num + i] = src[i];
		i++;
	}
	dest[num + i] = '\0';
	return (dest);
}
