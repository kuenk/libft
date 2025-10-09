/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcuenca <dcuenca@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/07 20:40:34 by dcuenca           #+#    #+#             */
/*   Updated: 2025/10/07 21:11:08 by dcuenca          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_calloc(size_t num, size_t size)
{
    size_t  total;
    void    *pointer;
    

    total = num * size;
    pointer = malloc(total);
    if(pointer != NULL)
        ft_memset(pointer, 0, total);
    return(pointer);
}