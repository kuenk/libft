/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcuenca <dcuenca@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/30 23:31:30 by dcuenca           #+#    #+#             */
/*   Updated: 2025/10/05 02:26:15 by dcuenca          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <stdlib.h>
# include <unistd.h>

int ft_isalpha(int a);
int ft_isdigit(int n);
int	ft_isalnum(int a);
int	ft_isascii(int a);
int ft_isprint(int a);
size_t ft_strlen(const char *str);
void	*ft_memset(void *str, int c, size_t s);
void	ft_bzero(void *str, size_t n);
void	*ft_memcpy(void *dest, const void *src, size_t n);
void	*ft_memmove(void *dest, const void *src, size_t n);
size_t	ft_strlcpy(char *dest, const char *src, size_t n);
size_t	ft_strlcat(char *dst, const char *src, size_t dstsize);
int	ft_toupper(int c);
int ft_tolower(int c);
char *ft_strchr(const char *s, int c);
char	*ft_strrchr(const char *s, int c);
int ft_strncmp(const char *str1, const char *str2, size_t n);
void	*ft_memchr(const void *s, int c, size_t n);


#endif