/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vafleith <vafleith@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 16:33:56 by vafleith          #+#    #+#             */
/*   Updated: 2023/11/13 21:25:47 by vafleith         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	i;

	i = ft_strlen(s) - 1;
	while (i != 0 && s[i] != c)
		i--;
	if (i)
		return ((char *)(&s[i]));
	return (NULL);
}
/*
#include <stdio.h>

int	main(void)
{
	char str[] = "hello world";
	printf("%s\n", ft_strrchar(str, 'w'));
}
*/
