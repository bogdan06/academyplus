/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bolariu <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/23 23:21:29 by bolariu           #+#    #+#             */
/*   Updated: 2015/11/03 14:19:05 by bolariu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __LIBFT_H__
# define __LIBFT_H__

# include <string.h>
# include <stdlib.h>
# include <unistd.h>

void	ft_putchar(int c);
void	ft_putstr(const char *s);
size_t	ft_strlen(const char *str);
void	ft_bzero(void *s, size_t n);
int		ft_isascii(int c);
int		ft_isalpha(int c);
int		ft_isdigit(int c);
int		ft_isalnum(int c);
char	*ft_strcat(char *s1, const char *s2);
char	*ft_strchr(const char *s, int c);
int		ft_strcmp(const char *s1, const char *s2);
char	*ft_strcpy(char *dst, const char *src);
int		ft_strncmp(const char *s1, const char *s2, size_t n);
char	*ft_strncat(char *s1, const char *s2, size_t n);
char	*ft_strncpy(char *dst, const char *src, size_t n);
int		ft_tolower(int c);
int		ft_toupper(int c);
char	*ft_strrchr(const char *s, int c);
char	*ft_strnstr(const char *s1, const char *s2, size_t n);
char	*ft_strstr(const char *str, const char *to_find);
int		ft_isprint(int c);
size_t	ft_strlcat(char *dst, const char *src, size_t size);
int		ft_atoi(const char *str);
void	*ft_memset(void *b, int c, size_t len);
void	*ft_memchr(const void *s, int c, size_t n);
int		ft_memcmp(const void *s1, const void *s2, size_t n);
char	*ft_strdup(const char *s1);
void	*ft_memmove(void *dst, const void *src, size_t len);
void	*ft_memcpy(void *dst, const void *src, size_t n);
void	*ft_memccpy(void *dst, const void *src, int c, size_t n);
size_t	ft_abs(int n);
char	*ft_itoa(int n);
void	*ft_memalloc(size_t size);
void	ft_memdel(void **ap);
int		ft_min(int x, int y);
float	ft_fmin(float x, float y);
double	ft_dmin(double x, double y);
size_t	ft_nbrlen(int n);
size_t	ft_power(int n, int p);
void	ft_putchar_fd(char c, int fd);
void	ft_putendl_fd(char const *s, int fd);
void	ft_putendl(char const *s);
void	ft_putnbr(int n);
int		ft_str_isdigit(char *str);
int		ft_str_isint(char *str);
void	ft_strdel(char **as);
int		ft_strequ(char const *s1, char const *s2);
size_t	ft_wordsize(char const *s, char c);
size_t	ft_countwords(char const *s, char c);
char	**ft_strsplit(char const *s, char c);
char	**ft_strsplit_once(char const *s, char c);
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
char	*ft_strmap(char const *s, char (*f)(char));
char	*ft_strjoin(char const *s1, char const *s2);
void	ft_striteri(char *s, void (*f)(unsigned int, char *));
void	ft_striter(char *s, void (*f)(char *));
void	ft_putnbr_fd(int n, int fd);
char	*ft_strtrim(char const *s);
char	*ft_strsub(char const *s, unsigned int start, size_t len);
int		ft_strnequ(char const *s1, char const *s2, size_t n);
char	*ft_strnew(size_t size);
void	ft_putstr_fd(char const *s, int fd);
void	ft_strclr(char *s);

#endif
