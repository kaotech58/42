/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: teiffe <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/09 10:53:14 by teiffe            #+#    #+#             */
/*   Updated: 2021/09/09 12:49:22 by teiffe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	len;

	len = ft_strlen(s);
	if ((char)c == '\0')
	{
		return ((char *)(s + len));
	}
	while (len--)
	{
		if (*(s + len) == c)
		{
			return ((char *)(s + len));
		}
	}
	return (NULL);

}

