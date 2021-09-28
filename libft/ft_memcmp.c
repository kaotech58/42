/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: teiffe <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/28 13:44:25 by teiffe            #+#    #+#             */
/*   Updated: 2021/09/28 13:44:27 by teiffe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t len)
{
	const unsigned char	*string1;
	const unsigned char	*string2;

	if (s1 == s2 || len == 0)
	{
		return (0);
	}
	string1 = (const unsigned char *)s1;
	string2 = (const unsigned char *)s2;
	while (len--)
	{
		if (*string1 != *string2)
		{
			return (*string1 - *string2);
		}
		++string1;
		++string2;
	}
	return (0);
}
