/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: teiffe <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/08 13:10:28 by teiffe            #+#    #+#             */
/*   Updated: 2021/10/19 11:19:11 by teiffe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* This function checks if c is a printable character
 * this includes special characters like space and hash
 * it'll return a 0 for false and a 1 for true */
int	ft_isprint(int c)
{
	return (c >= 32 && c <= 126);
}
