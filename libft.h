/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haguezou <haguezou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 18:41:16 by haguezou          #+#    #+#             */
/*   Updated: 2022/10/18 13:31:50 by haguezou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef  LIBFT_H
# define LIBFT_H

# include <stdlib.h>

int		ft_isalpha(int c);
int		ft_isdigit(int c);
int		ft_isalnum(int c);
int		ft_isprint(int c);
size_t	ft_strlen(char *string);
size_t	ft_strlcat(char *dest, char *src, size_t n);
void	*ft_memset(void *ptr, int c, size_t len);
void	ft_bzero(void *string, size_t n);
void	*ft_memcpy(void *dest, const void *src, size_t n);
void	*ft_memmove(void *to, void *from, size_t n);
char	*ft_strchr(const char *s, int c);
char	*ft_strrchr(const char *str, int c);
void	*ft_memchr(const void *s, int c, size_t n);
int		ft_memcmp(const void *s1, const void *s2, size_t n);
int		ft_isascii(int c);
int		ft_toupper(int c);
int		ft_tolower(unsigned int c);
int		ft_strncmp(const char *s1, const char *s2, size_t n);
size_t	ft_strlcpy(char *dest, const char *src, size_t n);
char	*ft_strnstr(const char *bigStr, const char *smallStr, size_t len);
void	*ft_calloc(size_t count, size_t size);
char	*ft_strdup(const char *str);
char	*ft_substr(const char *s, unsigned int start, size_t len);
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_strtrim(char const *s1, char const *set);
#endif
