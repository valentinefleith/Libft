/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vafleith <vafleith@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 23:32:04 by vafleith          #+#    #+#             */
/*   Updated: 2023/09/24 23:54:22 by vafleith         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	memcmp(const void *s1, const void *s2, size_t n)
{
	size_t i = 0;
	const unsigned char *c_s1 = s1;
	const unsigned char *c_s2 = s2;
	
	if (n == 0)
		return 0;
	while (c_s1[i] == c_s2[i] && c_s1[i] && c_s2[i] && i < n)
		i++;
	return (c_s1[i] - c_s2[i]);
}
