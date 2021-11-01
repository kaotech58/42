/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: teiffe <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/28 13:49:11 by teiffe            #+#    #+#             */
/*   Updated: 2021/10/21 11:47:33 by teiffe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Included libft to be able to use the size_t data type and the
 * ft_strlen and ft_memcpy functions */
#include "libft.h"

/*  This function uses the ft_strlen to determine the length
 *  of the src pointer and then compares it to the size parameter
 *  it then uses the ft_memcpy function to copy the src to the dst
 *  depending on the condition. */
size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	len;

	len = ft_strlen(src);
	if (len < size)
	{
		ft_memcpy(dst, src, len + 1);
	}
	else if (size)
	{
		ft_memcpy(dst, src, size - 1);
		dst[size - 1] = '\0';
	}
	return (ft_strlen(src));
}
