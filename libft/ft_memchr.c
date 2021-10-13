/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: teiffe <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/28 13:44:00 by teiffe            #+#    #+#             */
/*   Updated: 2021/10/13 14:26:30 by teiffe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t len)
{
	while (len--)
	{
		if (*(const unsigned char *)s == (unsigned char)c)
		{
			return ((void *)s);
		}
		++s;
	}
	return (NULL);
}
