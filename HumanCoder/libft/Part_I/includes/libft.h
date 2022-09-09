#ifndef LIBFT_H
# define LIBFT_H

#include <unistd.h>
#include <stdlib.h>

int		ft_atoi(const char *strNum);
void	ft_bzero(void *s, size_t n);
int		ft_isalnum(int c);
int		ft_isalpha(int c);
int 	ft_isascii(int c);
int		ft_isdigit(int c);
int		ft_isprint(int c);
void	*ft_memchr(const void *src, int c, size_t n);
int		ft_memcmp(const void *strA, const void *strB, size_t n);
void	*ft_memcpy(void *dst, const void *src, size_t n);
void	*ft_memmove(void *dst, const void *src, size_t n);
void	*ft_memset(const void *src, int c, size_t n);
char	*ft_strchr(const char *src, int c);
void	ft_strlcat(char *dst, const char *src, size_t len);
size_t	ft_strlcpy(char *dst, const char *src, size_t len);
size_t	ft_strlen(const char *src);
int		ft_strncmp(const char *strA, const char *strB, size_t n);
char	*ft_strnstr(const char *big, const char *little, size_t n);
char	*ft_strrchr(const char *src, int c);
int		ft_tolower(int c);
int		ft_toupper(int c);

#endif