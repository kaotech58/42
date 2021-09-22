/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: teiffe <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/08 13:26:05 by teiffe            #+#    #+#             */
/*   Updated: 2021/09/08 13:38:06 by teiffe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t     ft_strlen(const char *s)
{
        const char *stringend = s;

        while (*stringend)
        {
                ++stringend;
        }
        return (stringend - s);
}
