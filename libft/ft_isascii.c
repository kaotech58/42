/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: teiffe <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/08 12:53:00 by teiffe            #+#    #+#             */
/*   Updated: 2021/10/19 11:15:32 by teiffe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*  This function checks if c is
 *  any ascii character and returns
 *  0 for false and 1 for true*/
int	ft_isascii(int c)
{
	return (c >= 0 && c <= 127);
}
