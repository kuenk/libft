/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcuenca <dcuenca@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/10 18:20:33 by dcuenca           #+#    #+#             */
/*   Updated: 2025/10/12 12:21:03 by dcuenca          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strtrim(char const *s1, char const *set)
{
	size_t	s1_len;
	size_t	i;
	size_t	end;
	char	*sub_s;

	if (s1 == NULL || set == NULL)
		return (NULL);
	s1_len = ft_strlen(s1);
	i = 0;
	while (s1[i] != '\0' && ft_strchr(set, s1[i]) != NULL)
		i++;
	end = s1_len;
	while (end > i && ft_strchr(set, s1[end - 1]) != NULL)
		end--;
	sub_s = ft_substr(s1, i, end - i);
	return (sub_s);
}