/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isalpha.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: teiffe <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/08 11:54:10 by teiffe            #+#    #+#             */
/*   Updated: 2021/10/19 10:44:57 by teiffe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* This function checks if c is an upper case
 * letter and returns a 0 for false or a 1 for true */
static int	ft_isupper(int c)
{
	return (c >= 65 && c <= 90);
}

/* Thie function checks if c is a lower case
 * letter and returns a 0 for false or a 1 for true */
static int	ft_islower(int c)
{
	return (c >= 97 && c <= 122);
}

/* This function checks if ft_islower or ft_isupper
 * is true, if either are true then this function will
 * return a 0 for false or a 1 for true */
int	ft_isalpha(int c)
{
	return (ft_islower(c) || ft_isupper(c));
}
