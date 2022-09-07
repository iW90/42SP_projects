/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inwagner <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 19:07:35 by inwagner          #+#    #+#             */
/*   Updated: 2022/07/24 19:07:37 by inwagner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find);

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;
	int	validator;

	if (*to_find == '\0')
		return (str);
	i = 0;
	while (str[i++] != '\0')
	{
		if (str[i] == to_find[0])
		{
			j = 0;
			validator = 0;
			while (to_find[j] != '\0')
			{
				if (str[i + j] != to_find[j])
					validator = 1;
				j++;
			}
			if (validator == 0)
				return (&str[i]);
			j++;
		}
	}
	return (0);
}
