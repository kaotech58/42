/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: teiffe <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/08 13:26:05 by teiffe            #+#    #+#             */
/*   Updated: 2021/10/13 15:34:47 by teiffe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*this function creates a variable then keeps incrementing its value
 * until it gets to the null terminator it then gets the end value
 * and subtracts the starting value to show the length of the string*/
size_t	ft_strlen(const char *s)
{
	const char	*stringend = s;

	while (*stringend)
	{
		++stringend;
	}
	return (stringend - s);
}
