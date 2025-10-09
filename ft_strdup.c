/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcuenca <dcuenca@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/07 21:12:20 by dcuenca           #+#    #+#             */
/*   Updated: 2025/10/07 21:29:41 by dcuenca          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strdup(const char *s)
{
    char    *pointer;
    size_t  i;

    i = 0;
    pointer = malloc(ft_strlen(s) + 1);
    if (pointer == NULL)
        return(NULL);
    while(s[i] != '\0')
    {
        pointer[i] = s[i];
        i++;
    }
    pointer[i] = '\0';
    return(pointer);
}