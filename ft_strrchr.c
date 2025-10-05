/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcuenca <dcuenca@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/04 11:30:44 by dcuenca           #+#    #+#             */
/*   Updated: 2025/10/05 01:06:44 by dcuenca          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	while(*s != '\0')
	{
    	if(*s == c)
        	return((char *)s);
    	s++;
	}
	if(*s == '\0')
    	return((char *)s);
	return 0;











    const char *last = 0;
    while(*s != '\0')
    {
        if(*s == c)
            last = s;
        s++;
    }
    if(*s == '\0' && c == '\0')
        return((char *)s);
    return((char *)last);
}