/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inwagner <inwagner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 18:09:22 by inwagner          #+#    #+#             */
/*   Updated: 2023/02/21 16:12:08 by inwagner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 42
# endif

# include <stdlib.h>
# include <unistd.h>

char	*get_next_line(int fd);
char	*read_line(int fd, char *buff);
char	*get_line_buff(char *buff);
char	*copy_line_buff(char *buff, char *first_line);
char	*redefine_buff(char *buff);

size_t	ft_strlen(const char *src);
char	*ft_strjoin(char *s1, char *s2);
char	*ft_strchr(const char *src, int c);

#endif
