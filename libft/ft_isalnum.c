/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: teiffe <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/08 12:30:45 by teiffe            #+#    #+#             */
/*   Updated: 2021/10/19 10:56:25 by teiffe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Included libft.h so we have access to the
 * ft_isalpha and ft_isdigit functions */
#include "libft.h"

/* Checks if c is a number or a letter and returns
 * 0 for false and 1 for true */
int	ft_isalnum(int c)
{
	return (ft_isalpha(c) || ft_isdigit(c));
}
