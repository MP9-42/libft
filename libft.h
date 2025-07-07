/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: MP9 <mikjimen@student.42heilbronn.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/14 11:31:33 by MP9               #+#    #+#             */
/*   Updated: 2025/07/07 15:07:29 by MP9              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <limits.h>
# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <unistd.h>

int		ft_atoi(const char *str);
int		ft_toupper(int c);
int		ft_memcmp(const void *s1, const void *s2, size_t n);
int		ft_strcmp(const char *s1, const char *s2);
int		ft_tolower(int c);
int		ft_strncmp(const char *s1, const char *s2, size_t n);
int		ft_isprint(int c);
int		ft_isdigit(int i);
int		ft_isascii(int i);
int		ft_isalpha(int i);
int		ft_isalnum(int i);
size_t	ft_strlen(const char *str);
size_t	ft_strlcat(char *dest, const char *src, size_t s);
size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize);
char	*ft_strstr(const char *haystack, const char *needle);
char	*ft_strrchr(const char *s, int c);
char	*ft_strnstr(const char *haystack, const char *needle, size_t n);
char	*ft_strncpy(char *dest, char *src, size_t n);
char	*ft_strncat(char *dest, const char *src, size_t n);
char	*ft_strdup(char *str);
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
char	*ft_strtrim(char const *s1, char const *set);
char	*ft_substr(char const *s, unsigned int start, size_t len);
char	*ft_strcat(char *dest, const char *src);
char	*ft_strcpy(char *dest, char *src);
char	*ft_strchr(const char *s, int c);
char	*ft_strjoin(const char *s1, const char *s2);
char	*ft_itoa(int n);
void	*ft_memset(void *s, int i, size_t n);
void	*ft_memchr(const void *s, int c, size_t n);
void	*ft_memcpy(void *dst, const void *src, size_t n);
void	*ft_calloc(size_t count, size_t size);
void	*ft_memmove(void *dst, const void *src, size_t len);
void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(const char *s, int fd);
void	ft_bzero(void *s, size_t n);
void	ft_putendl_fd(const char *s, int fd);
void	ft_putnbr_fd(int nb, int fd);
void	ft_striteri(char *s, void (*f)(unsigned int, char*));

#endif