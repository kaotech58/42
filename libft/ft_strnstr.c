/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: teiffe <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/28 13:50:32 by teiffe            #+#    #+#             */
/*   Updated: 2021/09/28 13:50:34 by teiffe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	l_length;

	l_length = ft_strlen(little);
	if (!l_length)
	{
		return ((char *) big);
	}
	while (*big && len > l_length && ft_strncmp(big, little, l_length))
	{
		len--;
		big++;
	}
	if (len >= l_length && !ft_strncmp(big, little, l_length))
	{
		return ((char *) big);
	}
	return (NULL);
}
