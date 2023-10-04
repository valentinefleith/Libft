/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vafleith <vafleith@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 09:21:22 by vafleith          #+#    #+#             */
/*   Updated: 2023/10/04 09:41:19 by vafleith         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char *substr;
	size_t index;

	substr = malloc(1 + len * sizeof(char));
	if (substr == NULL)
		return NULL;
	index = 0;
	while (index < len)
	{
		substr[index] = s[start];
		index++;
		start++;
	}
	substr[index] = '\0';
	return substr;
}

/*
#include <stdio.h>

int main(void)
{
	unsigned int start = 3;
	size_t len = 4;
	char test[] = "012345678";
	char *substr = ft_substr(test, start, len);
	printf("trying to create a substring from ** %s ** starting at index %i\n", test, start);
	printf("of size %lu\n", len);
	printf("the substring is : %s\n", substr);
}
*/
