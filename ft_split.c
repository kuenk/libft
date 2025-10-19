/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcuenca <dcuenca@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/10 18:38:08 by dcuenca           #+#    #+#             */
/*   Updated: 2025/10/17 20:47:20 by dcuenca          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_words(const char *s, char c)
{
	int	count;
	int	i;

	count = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] != c && (i == 0 || s[i - 1] == c))
			count++;
		i++;
	}
	return (count);
}

static size_t	get_len(const char *s, char c)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0' && s[i] != c)
		i++;
	return (i);
}

static void	free_mem(char **result, size_t j)
{
	while (j > 0)
	{
		free(result[j]);
		j--;
	}
	free(result);
}

static char	**split(const char *s, char c, char **str, size_t count)
{
	size_t	col;
	size_t	row;

	col = 0;
	row = 0;
	while (row < count)
	{
		while (*(s + col) != '\0' && *(s + col) == c)
			col++;
		*(str + row) = ft_substr(s, col, get_len(&*(s + col), c));
		if (*(str + row) == NULL)
		{
			free_mem(str, row);
			return (NULL);
		}
		while (*(s + col) != '\0' && *(s + col) != c)
			col++;
		row++;
	}
	*(str + row) = NULL;
	return (str);
}

char	**ft_split(char const *s, char c)
{
	char	**result;
	size_t	nword;

	if (!s)
		return (NULL);
	nword = count_words(s, c);
	result = malloc((nword + 1) * sizeof(char *));
	if (!result)
		return (NULL);
	result = split(s, c, result, nword);
	return (result);
}
