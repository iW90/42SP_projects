/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inwagner <inwagner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 18:09:22 by inwagner          #+#    #+#             */
/*   Updated: 2022/11/11 18:57:32 by inwagner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 8
# endif

# include <stdlib.h>
# include <unistd.h>

char	*get_next_line(int fd);
char	*read_line(int fd, char *buff);
char	*get_line_buff(char *buff);
char	*redefine_buff(char *buff);

size_t	ft_strlen(const char *src);
char	*ft_strjoin(char *s1, char *s2);
char	*ft_strchr(const char *src, int c);

#endif
