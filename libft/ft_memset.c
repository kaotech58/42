/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: teiffe <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/08 13:42:29 by teiffe            #+#    #+#             */
/*   Updated: 2021/10/19 11:46:08 by teiffe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Included libft to be able to use size_t data type */
#include "libft.h"

/* This function writes the value for c to all bytes
 * to the string s until it is equal to len */
void	*ft_memset(void *s, int c, size_t len)
{
	unsigned char	*ps;

	ps = (unsigned char *) s;
	while (len--)
	{
		*ps = (unsigned char)c;
		++ps;
	}
	return (s);
}
