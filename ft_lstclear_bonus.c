/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcuenca <dcuenca@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 18:47:01 by dcuenca           #+#    #+#             */
/*   Updated: 2025/10/16 21:01:26 by dcuenca          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list  *tempo;

	if(lst != NULL && del != NULL)
	{
		while(*lst != NULL)
		{
			tempo = (*lst)->next;
			del((*lst)->content);
			free(*lst);
			*lst = tempo;
		}
	}
}