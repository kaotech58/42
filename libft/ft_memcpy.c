/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: teiffe <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/09 10:12:45 by teiffe            #+#    #+#             */
/*   Updated: 2021/10/19 13:29:33 by teiffe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*  Included libft to be able to use size_t data type
 *  and to use NULL */
#include "libft.h"

/* This function copies src to dst for len amount of bytes
 * it then returns the dst string */
void	*ft_memcpy(void *dst, const void *src, size_t len)
{
	unsigned char		*pdst;
	unsigned const char	*psrc;

	pdst = (unsigned char *)dst;
	psrc = (unsigned char *)src;
	if (!dst || !src)
	{
		return (NULL);
	}
	while (len--)
	{
		*((char *)pdst++) = *((char *)psrc);
	}
	return (dst);
}
