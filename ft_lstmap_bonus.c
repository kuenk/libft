/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcuenca <dcuenca@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 20:25:37 by dcuenca           #+#    #+#             */
/*   Updated: 2025/10/17 18:26:29 by dcuenca          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*list_new;
	t_list	*node_new;

	list_new = NULL;
	if (lst == NULL || f == NULL)
		return (NULL);
	while (lst != NULL)
	{
		node_new = ft_lstnew(f(lst->content));
		if (node_new == NULL)
		{
			ft_lstclear(&list_new, del);
			return (NULL);
		}
		ft_lstadd_back(&list_new, node_new);
		lst = lst->next;
	}
	return (list_new);
}
