/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcuenca <dcuenca@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/04 11:30:44 by dcuenca           #+#    #+#             */
/*   Updated: 2025/10/17 17:10:39 by dcuenca          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*ocurrence;

	ocurrence = NULL;
	while (*s != '\0')
	{
		if (*s == c)
			ocurrence = (char *)s;
		s++;
	}
	if (c == '\0')
		return ((char *)s);
	return (ocurrence);
}
