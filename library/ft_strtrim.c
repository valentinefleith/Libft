/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vafleith <vafleith@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 17:19:03 by vafleith          #+#    #+#             */
/*   Updated: 2023/10/05 17:59:02 by vafleith         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_get_size_of_trimmed(char const *s1, char const *set);
static void		ft_strtrcpy(char *dest, char const *s1, char const *set);

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*trimmed;

	trimmed = malloc(ft_get_size_of_trimmed(s1, set) * sizeof(char));
	if (trimmed == NULL)
		return (NULL);
	ft_strtrcpy(trimmed, s1, set);
	return (trimmed);
}

static size_t	ft_get_size_of_trimmed(char const *s1, char const *set)
{
	size_t	size;

	size = 0;
	while (*s1)
	{
		if (!ft_strchr(set, *s1))
			size++;
		s1++;
	}
	return (1 + size);
}

static void	ft_strtrcpy(char *dest, char const *s1, char const *set)
{
	while (*s1)
	{
		if (!ft_strchr(set, *s1))
		{
			*dest = *s1;
			dest++;
		}
		s1++;
	}
}

/*
#include <stdio.h>

int	main(void)
{
	char	*trimmed;

	char hello[] = "hello*[] salut*] [ca* /va*";
	trimmed = ft_strtrim(hello, "*[]/");
	printf("trying to trim '%s' and remove all '%s' characters\n", hello,
		"*[]/");
	printf("trimmed : '%s'\n", trimmed);
}
*/
