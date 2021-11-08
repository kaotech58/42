/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: teiffe <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/08 13:59:04 by teiffe            #+#    #+#             */
/*   Updated: 2021/11/08 14:58:52 by teiffe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Included libft to be able to use the ft_memset function */
#include "libft.h"

/* This function sends s, the NULL terminator and the len to ft_memset
 * it writes zeros to all bytes of s
 * if s is zero then it does nothing */
void	ft_bzero(void *s, size_t len)
{
	ft_memset(s, '\0', len);
}
