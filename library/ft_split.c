/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vafleith <vafleith@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/01 13:34:40 by vafleith          #+#    #+#             */
/*   Updated: 2023/10/02 11:00:54 by vafleith         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count_words(char *str, char c);
static char	*ft_get_end_of_word(char *start, char c);
static char	*ft_substrdup(char *start, char *end);

char	**ft_split(char const *s, char c)
{
	char	**strs;
	char	*start;
	int	count;
	char	*end;

	strs = malloc((1 + ft_count_words((char *)s, c)) * sizeof(char *));
	if (strs == NULL)
		return NULL;
	while (*s == c)
		s++;
	start = (char *)s;
	count = 0;
	while (count < ft_count_words((char *)s, c) && *start)
	{
		end = ft_get_end_of_word(start, c);
		strs[count++] = ft_substrdup(start, end);
		start = end;
		while (*s == c)
			start++;
	}
	strs[count] = NULL;
	return (strs);
}

static int	ft_count_words(char *str, char c)
{
	int count;
	int	is_new_word;

	if (!str)
		return 0;
	count = 0;
	is_new_word = TRUE;
	while (*str)
	{
		if (is_new_word && *str != c)
		{
			count++;
			is_new_word = FALSE;
		}
		if (*str == c)
			is_new_word = TRUE;
		str++;
	}
	return count;
}


static char	*ft_get_end_of_word(char *start, char c)
{
	while (*start)
	{
		if (*start == c)
			return start;
		start++;
	}
	return start;
}


static char	*ft_substrdup(char *start, char *end)
{
	char	*duplicate;
	size_t	size_of_str_nul;

	size_of_str_nul = end - start + 1;
	duplicate = malloc(size_of_str_nul);
	if (duplicate == NULL)
		return duplicate;
	ft_strlcpy(duplicate, start, size_of_str_nul);
	return duplicate;
}


#include <stdio.h>

int	main(void)
{
	char	**result;

	char test[] = "hello*world*gd";
	char sep = '*';
	int word_count = ft_count_words(test, sep);
	result = ft_split(test, sep);
	printf("%i words :\n", word_count);
	for (int i = 0; result[i]; i++)
	{
		printf("%s\n", result[i]);
	}
}
