/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcuenca <dcuenca@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/10 18:38:08 by dcuenca           #+#    #+#             */
/*   Updated: 2025/10/14 19:24:33 by dcuenca          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int count_words(const char *s, char c)
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
static char *dupli_word(const char *s, int start, int end)
{
    char    *word;
    int     i;

    i = 0;
    word = malloc((end - start +1) * sizeof(char));
    if (!word)
        return(NULL);
    while(start < end)
    {
        word[i] = s[start];
        i++;
        start++;
    }
    word[i] = '\0';
    return(word);
}

static void	free_mem(char **result, int j)
{
	while (j >= 0)
	{
		free(result[j]);
		j--;
	}
	free(result);
}

char    **ft_split(char const *s, char c)
{
	char	**result;
	int		i;
	int		j;
	int		start;
    
	i = 0;
	j = 0;
	if (!s)
		return (NULL);
	result = malloc((count_words(s, c) + 1) * sizeof(char *));
	if (!result)
		return (NULL);
	while (s[i])
	{
		if (s[i] != c)
		{
			start = i;
			while (s[i] && s[i] != c)
				i++;
			result[j] = dupli_word(s, start, i);
			if (result[j] == NULL)
            {
                free_mem(result, j -1);				
                return (NULL);
            }
            j++;
		}
		else
			i++;
	}
	result[j] = NULL;
	return (result);
}