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
	size_t	i;
	char	*pdst;
	char	*psrc;

	i = 0;
	pdst = (char *)dst;
	psrc = (char *)src;
	while (i < len)
	{
		pdst[i] = psrc[i];
		++i;
	}
	return (dst);
}
