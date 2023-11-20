/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vafleith <vafleith@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 16:20:57 by vafleith          #+#    #+#             */
/*   Updated: 2023/11/20 22:52:40 by vafleith         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_a_match(char *haystack, char *needle);

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;

	i = 0;
	while (haystack[i] && i + ft_strlen(needle) < len)
	{
		if (is_a_match((char *)&haystack[i], (char *)needle))
			return ((char *)&haystack[i]);
		i++;
	}
	return (NULL);
}

static int	is_a_match(char *haystack, char *needle)
{
	while (*needle && *haystack)
	{
		if (*needle != *haystack)
			return (0);
		needle++;
		haystack++;
	}
	if (!*haystack && *needle)
		return (0);
	return (1);
}
