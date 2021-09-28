/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: teiffe <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/28 13:45:09 by teiffe            #+#    #+#             */
/*   Updated: 2021/09/28 13:45:11 by teiffe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*pdst;
	const unsigned char	*psrc;

	pdst = (unsigned char *)dst;
	psrc = (const unsigned char *)src;
	if (src < dst)
	{
		psrc = psrc + len - 1;
		pdst = pdst + len - 1;
		while (len--)
		{
			*pdst-- = *psrc--;
		}
	}
	else if (src >= dst)
	{
		while (len--)
		{
			*pdst++ = *psrc++;
		}
	}
	return (dst);
}
