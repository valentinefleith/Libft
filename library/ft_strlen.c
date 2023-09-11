/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vafleith <vafleith@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 11:39:26 by vafleith          #+#    #+#             */
/*   Updated: 2023/09/11 11:44:44 by vafleith         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

size_t	ft_strlen(const char *str)
{
	size_t length = 0;
	while (str[length])
		length++;
	return length;
}

/*
#include <stdio.h>
int	main(void)
{
	printf("%li\n", ft_strlen("hello"));
}
*/
