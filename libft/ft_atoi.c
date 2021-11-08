/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: teiffe <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 12:43:39 by teiffe            #+#    #+#             */
/*   Updated: 2021/11/01 15:21:53 by teiffe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

/* This function checks for
 * valid input*/
char	ft_isnumber(char c)
{
	if (c >= '0' && c <= '9')
	{
		return (c = 1);
	}
	return (c = 0);
}

/* If nptr is null return 0 */
/* While nptr is blank iterate through nptr */
/* If nptr is a negative update symbol variable */
/* This function will iterate through all characters
 * of the input pointer and update the result variable
 * it gets the ASCII character of the corresponding digit
 * it then subtracts the code from '0' to get the numerical
 * value and multiplies result by 10 to shuffle digits
 * left to update running total */
int	ft_atoi(const char *nptr)
{
	int	result;
	int	symbol;
	int	base;

	result = 0;
	symbol = 1;
	base = 1;
	if (!nptr)
	{
		return (0);
	}
	while (*nptr == ' ')
	{
		++nptr;
	}
	if (*nptr == '-' || *nptr == '+')
	{
		symbol = 1 - 2 * ++nptr == '-';
	}
	while (*nptr)
	{
		if (ft_isnumber(*nptr) == 0)
		{
			break ;
		}
		if (base > INT_MAX / 10
			|| (base == INT_MAX / 10
				&& *nptr - '0' > 7))
		{
			if (symbol == 1)
			{
				return (INT_MAX);
			}
			else
			{
				return (INT_MIN);
			}
		}
		base = 10 * base + *nptr - '0';
		++nptr;
	}
	return (base * symbol);
}

int	main(void)
{
	char str[] = "-134";

	int	val = ft_atoi(str);
	printf("%d \n", val);
	return (0);
}
