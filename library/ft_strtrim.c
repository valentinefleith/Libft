/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vafleith <vafleith@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 16:18:14 by vafleith          #+#    #+#             */
/*   Updated: 2023/11/26 16:38:02 by vafleith         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	unsigned int	start;
	size_t			len;
	char			*trimmed;

	start = 0;
	while (s1[start] && ft_strchr(set, s1[start]))
		start++;
	len = ft_strlen(s1);
	while (ft_strchr(set, s1[len]))
		len--;
	len -= (start - 1);
	trimmed = ft_substr(s1, start, len);
	if (!trimmed)
		return (NULL);
	return (trimmed);
}
/*
#include <stdio.h>

int	main(void)
{
	char	*trimmed;

	//char hello[] = "      hello \tsalut  ca va    \t";
	char hello[] = "hello \tsalut  ca va";
	trimmed = ft_strtrim(hello, " \t\n");
	printf("trying to trim '%s' and remove '%s' characters\n", hello,
		"*[]/");
	printf("trimmed : '%s'\n", trimmed);
}
*/
