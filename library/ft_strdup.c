/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vafleith <vafleith@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 14:26:12 by vafleith          #+#    #+#             */
/*   Updated: 2023/10/14 13:44:25 by vafleith         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*strdup(const char *s)
{
	char	*duplicate;
	size_t	size_of_str_nul;

	size_of_str_nul = ft_strlen(s) + 1;
	duplicate = malloc(size_of_str_nul);
	if (duplicate == NULL)
		return (duplicate);
	ft_strlcpy(duplicate, s, size_of_str_nul);
	return (duplicate);
}
