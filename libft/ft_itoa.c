/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: teiffe <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/28 13:37:42 by teiffe            #+#    #+#             */
/*   Updated: 2021/10/13 14:23:14 by teiffe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	determine_len(unsigned int n);
static void		convert(unsigned int n, char *str, size_t len);

char	*ft_itoa(int n)
{
	unsigned int	usn;
	size_t			len;
	char			*str;

	usn = n;
	len = 0;
	if (n < 0)
	{
		usn *= -1;
		len = 1;
	}
	len += determine_len(usn);
	str = malloc((len + 1) * sizeof(char));
	if (!str)
		return (NULL);
	if (n < 0)
		str[0] = '-';
	convert(usn, str, len - 1);
	str[len] = '\0';
	return (str);
}

static void	convert(unsigned int usn, char *str, size_t len)
{
	if (usn > 9)
		convert(usn / 10, str, len - 1);
	str[len] = (usn % 10) + '0';
}

static size_t	determine_len(unsigned int usn)
{
	size_t			len;

	len = 1;
	while (usn > 9)
	{
		usn /= 10;
		len++;
	}
	return (len);
}
