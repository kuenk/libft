/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcuenca <dcuenca@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/05 22:26:51 by dcuenca           #+#    #+#             */
/*   Updated: 2025/10/06 19:27:44 by dcuenca          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strnstr(const char *haystack, const char *needle, size_t len)
{
    size_t  src_len;

    src_len = ft_strlen(needle);
    if(*needle == '\0')
        return((char *)haystack);
    while(*haystack && len >= src_len)
    {
        if(ft_strncmp(haystack, needle, src_len) == 0)
            return((char *)haystack);
        len--;
        haystack++;        
    }

    return(0);
}