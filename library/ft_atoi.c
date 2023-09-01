/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: val <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/01 16:46:39 by val               #+#    #+#             */
/*   Updated: 2023/09/01 17:20:44 by val              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	char_is_in_str(char c, const char *str);
unsigned int	ft_unsigned_atoi(const char *str);

int	ft_atoi(const char *str)
{
	while (char_is_in_str(*str, " \t\n\r\v\f"))
		str++;
	if (*str == '-')
	{
		str++;
		return (-ft_unsigned_atoi(str));
	}
	return (ft_unsigned_atoi(str));
}

unsigned int	ft_unsigned_atoi(const char *str)
{
	int output;

	output = 0;
	while (char_is_in_str(*str, "0123456789"))
	{
		output = output * 10 + (*str - '0');
		str++;
	}
	return output;
}

int char_is_in_str(char c, const char *str)
{
	while (*str)
	{
		if (*str == c)
			return 1;
		str++;
	}
	return 0;
}
/*
#include <stdio.h>

int main(void)
{
	printf("%i\n", ft_atoi("   			\n-42fddfj"));
}
*/
