/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcuenca <dcuenca@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/06 19:36:25 by dcuenca           #+#    #+#             */
/*   Updated: 2025/10/06 21:47:01 by dcuenca          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_atoi(const char *str)
{
    int result;
    int i;
    int sign;

    i=0;
    result=0;
    sign=1;
    while (str[i] == '\r' || str[i] == '\t' || str[i] == '\n' || str[i] == '\f'
		|| str [i] == ' ' || str[i] == '\v')
        i++;
    if(str[i] == '-')
    {
        sign = -1;
        i++;
    }
    else if (str[i] == '+')
        i++;
    while(str[i] >= '0' && str[i] <= '9')
    {
        result = result *10 + (str[i] - '0');
        i++;
    }
    return(sign * result);
}