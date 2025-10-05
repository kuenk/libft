/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcuenca <dcuenca@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/01 22:14:01 by dcuenca           #+#    #+#             */
/*   Updated: 2025/10/02 20:47:52 by dcuenca          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	len;
	size_t	total_len;

	i = 0;
	len = ft_strlen(dst);
	total_len = len - dstsize;
	if (total_len > 1)
	{
		while (src[i] != '\0' && i < total_len - 1)
		{
			dst[len +i] = src[i];
			i++;
		}
		dst[len + i] = '\0';
	}
	total_len = len + ft_strlen(src);
	return (total_len);
}