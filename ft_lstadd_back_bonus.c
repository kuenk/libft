/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcuenca <dcuenca@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 23:41:34 by dcuenca           #+#    #+#             */
/*   Updated: 2025/10/17 20:48:53 by dcuenca          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **list, t_list *new)
{
	t_list	*cont;

	cont = *list;
	if (*list == NULL)
	{
		*list = new;
		return ;
	}
	else
	{
		while (cont->next != NULL)
			cont = cont->next;
	}
	cont->next = new;
}
