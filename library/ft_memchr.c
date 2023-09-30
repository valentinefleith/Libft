/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vafleith <vafleith@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 11:41:17 by vafleith          #+#    #+#             */
/*   Updated: 2023/09/29 14:06:52 by vafleith         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;
	char	*bytes;

	i = 0;
	bytes = (char *)s;
	while (bytes[i] && i < n)
	{
		if (bytes[i] == c)
			return (&bytes[i]);
	}
	return (NULL);
}
