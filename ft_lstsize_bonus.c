/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcuenca <dcuenca@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 18:46:21 by dcuenca           #+#    #+#             */
/*   Updated: 2025/10/15 19:05:53 by dcuenca          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_lstsize(t_list *lst)
{
    t_list  *cont;
    int i;

    i = 0;
    cont = lst;
    while(cont != NULL)
    {
        i++;
        cont = cont->next;
    }
    return(i);
}