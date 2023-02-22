/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inwagner <inwagner@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 18:09:18 by inwagner          #+#    #+#             */
/*   Updated: 2022/11/26 15:42:24 by inwagner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*get_next_line(int fd)
{
	char		*line;
	static char	*buff;

	if (fd < 0 || BUFFER_SIZE <= 0 || read(fd, 0, 0))
		return (NULL);
	buff = read_line(fd, buff);
	if (!buff)
		return (NULL);
	line = get_line_buff(buff);
	buff = redefine_buff(buff);
	return (line);
}

char	*read_line(int fd, char *buff)
{
	ssize_t		read_bytes;
	char		*temp_str;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	temp_str = (char *)malloc((sizeof(char) * BUFFER_SIZE + 1));
	if (!temp_str)
		return (NULL);
	read_bytes = 1;
	while (read_bytes && !(ft_strchr(buff, '\n')))
	{
		read_bytes = read(fd, temp_str, BUFFER_SIZE);
		if (read_bytes == -1)
		{
			free (temp_str);
			return (NULL);
		}
		temp_str[read_bytes] = '\0';
		buff = ft_strjoin(buff, temp_str);
	}
	free (temp_str);
	return (buff);
}

char	*get_line_buff(char *buff)
{
	char	*first_line;
	int		i;

	i = 0;
	if (!buff[i])
		return (NULL);
	while (buff[i] != '\n' && buff[i] != '\0')
		i++;
	if (buff[i] == '\n')
		i++;
	first_line = (char *)malloc(sizeof(char) * (i + 1));
	if (!first_line)
		return (NULL);
	return (copy_line_buff(buff, first_line));
}

char	*copy_line_buff(char *buff, char *first_line)
{
	int	i;

	i = 0;
	while (buff[i] && buff[i] != '\n')
	{
		first_line[i] = buff[i];
		i++;
	}
	if (buff[i] == '\n')
	{
		first_line[i] = buff[i];
		i++;
	}
	first_line[i] = '\0';
	return (first_line);
}

char	*redefine_buff(char *buff)
{
	char	*new_buff;
	size_t	new_buff_len;
	size_t	i;

	i = 0;
	while (buff[i] != '\n' && buff[i] != '\0')
		i++;
	if (!buff[i])
	{
		free(buff);
		return (NULL);
	}
	new_buff = (char *)malloc(sizeof(char) * (ft_strlen(buff) - i + 1));
	if (!new_buff)
		return (NULL);
	i++;
	new_buff_len = 0;
	while (buff[i] != '\0')
		new_buff[new_buff_len++] = buff[i++];
	new_buff[new_buff_len] = '\0';
	free(buff);
	return (new_buff);
}
