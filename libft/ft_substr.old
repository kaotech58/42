/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: teiffe <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/28 13:51:31 by teiffe            #+#    #+#             */
/*   Updated: 2021/10/13 15:14:16 by teiffe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	s_length;
	size_t	size;
	char	*sub;

	s_length = ft_strlen(s);
	size = len + 1;
	sub = (char *)malloc(size * sizeof(char));
	if (!s)
		return (NULL);
	if (start > s_length)
		return (ft_strdup(""));
	if (start + len > s_length)
		len = s_length - start;
	if (!sub)
		return (NULL);
	ft_memcpy(sub, s + start, len);
	sub[len] = '\0';
	return (sub);
}
