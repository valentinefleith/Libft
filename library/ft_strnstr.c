/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vafleith <vafleith@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 16:20:57 by vafleith          #+#    #+#             */
/*   Updated: 2023/09/26 13:56:46 by vafleith         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// Version 1 which seems to work
/*

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t i;
	size_t j;

	if (!*needle)
		return ((char *)haystack);
	i = 0;
	while (i < len && haystack[i])
	{
		j = 0;
		while (haystack[i + j] && haystack[i + j] == needle[j])
		{
			if (!needle[j + 1])
				return ((char *)&haystack[i]);
			j++;
		}
		i++;
	}
	return (NULL);
}
*/

// Version 2, more elegant but not sure it's working

static int	is_a_match(char *haystack, char *needle);

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t i;

	i = 0;
	while (haystack[i] && i < len)
	{
		if (is_a_match((char *)&haystack[i], (char *)needle))
			return (char *)&haystack[i];
		i++;
	}
	return NULL;
}

static int	is_a_match(char *haystack, char *needle)
{
	while(*needle && *haystack)
	{
		if (*needle != *haystack)
			return 0;
		needle++;
		haystack++;
	}
	if (!*haystack && *needle)
		return 0;
	return 1;
}

/*
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define OK "ok :)"
#define FAIL "rip :("

void	test_str_str(char *str, char *to_find)
{
	char	*libc_match;
	char	*my_match;
	int		libc_match_index;
	int		my_match_index;

	libc_match = strstr(str, to_find);
	my_match = ft_strnstr(str, to_find, 50);
	libc_match_index = libc_match - str;
	my_match_index = my_match - str;
	printf("attempting to find \"%s\" in \"%s\"\n", to_find, str);
	if (libc_match == 0)
	{
		if (my_match == 0)
		{
			printf("%s no match found\n", OK);
		}
		else
		{
			printf("%s no match for libc but ft_strstr found at %d\n",
					FAIL,
					my_match_index);
		}
		return ;
	}
	if (my_match == 0)
	{
		if (libc_match == 0)
		{
			printf("%s no match found\n", OK);
		}
		else
		{
			printf("%s no match for ft_strstr but libc found at %d\n",
					FAIL,
					libc_match_index);
		}
		return ;
	}
	if (libc_match_index == my_match_index)
	{
		printf("%s both functions found a match at index %d\n", OK,
				my_match_index);
	}
	else
	{
		printf("%s match found at index %d for libc and %d for ft_strstr\n",
				FAIL,
				libc_match_index,
				my_match_index);
	}
	return ;
}

int	main(void)
{
	test_str_str("Shor", "Short");
	test_str_str("Short", "Short");
	test_str_str("nfjkdsShort", "Short");
	test_str_str("Shor", "");

}
*/
