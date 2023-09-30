/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vafleith <vafleith@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/30 22:35:57 by vafleith          #+#    #+#             */
/*   Updated: 2023/09/30 22:47:58 by vafleith         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Provisional version : not sure I understood the function.

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	const char	*src_cpy;
	char		*dest_cpy;
	size_t		i;

	i = 0;
	src_cpy = src;
	dest_cpy = dest;
	while (i < n)
	{
		if (src_cpy != dest_cpy)
			dest_cpy[i] = src_cpy[i];
		i++;
	}
	return (dest);
}
