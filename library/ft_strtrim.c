/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vafleith <vafleith@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 16:18:14 by vafleith          #+#    #+#             */
/*   Updated: 2023/11/26 17:02:47 by vafleith         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_strtrim(char const *s1, char const *set)
{
	unsigned int	start;
	size_t			len;
	char			*trimmed;

	start = 0;
	while (s1[start] && ft_strchr(set, s1[start]))
		start++;
	len = ft_strlen(s1);
	while (ft_strchr(set, s1[len]) && len != start)
		len--;
	len -= start;
	trimmed = ft_substr(s1, start, len + 1);
	if (!trimmed)
		return (NULL);
	return (trimmed);
}

/*
int	main(void)
{
	char	*trimmed;

	//char hello[] = "      hello \tsalut  ca va    \t";
	char hello[] = "     \t";
	trimmed = ft_strtrim(hello, " \t\n");
	printf("trying to trim '%s' and remove '%s' characters\n", hello,
		" \t\n");
	printf("trimmed : '%s'\n", trimmed);
}
*/
