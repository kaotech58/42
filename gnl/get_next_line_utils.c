/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: teiffe <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 12:36:14 by teiffe            #+#    #+#             */
/*   Updated: 2022/03/01 12:36:27 by teiffe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	j;
	char	*str;

	str = (char *)malloc(sizeof(*s) * (len + 1));
	i = 0;
	j = 0;
	if (!str)
	{
		return (NULL);
	}
	while (s[j])
	{
		if (j >= start && i < len)
		{
			str[i] = s[j];
			++i;
		}
		++j;
	}
	str[i] = 0;
	return (str);
}

/* Beginning at the index 'start' and finishing at maximum
 * size 'len', this function allocates and returns a 
 * substring from the given string */

size_t	ft_strlen(const char *s)
{
	const char	*stringend = s;

	while (*stringend)
	{
		++stringend;
	}
	return (stringend - s);
}

/* This function takes an int as an argument and counts 
 * the length of the string up to (but not including) the 
 * null terminator. Then increments until the string is completed.
 * Then increments until the string is completed. */

char	*ft_strchr(const char *s, int c)
{
	while (*s)
	{
		if ((unsigned char)*s == (unsigned char)c)
		{
			return ((char *)s);
		}
		s++;
	}
	if (c == 0)
	{
		return ((char *)s);
	}
	return (NULL);
}

/* Searches for and returns a pointer to the first 
 * occurrence of c in the string. If this character is
 * not found, return NULL. */

char	*ft_strdup(const char *str)
{
	return (ft_substr(str, 0, ft_strlen(str)));
}

/* Allocates sufficient memory to hold the string (including
 * NULL terminator) and copies the old string to the new 
 * string and returns a pointer to the new address. */

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	s1_len;
	size_t	s2_len;
	char	*join;

	if (!s1 || !s2)
		return (NULL);
	s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);
	join = (char *) malloc((s1_len + s2_len + 1) * sizeof(char));
	if (!join)
		return (NULL);
	ft_memcpy(join, s1, s1_len);
	ft_memcpy(join + s1_len, s2, s2_len + 1);
	return (join);
}

/* Allocates and returns a new string that is the result of
 * s1 (string 1) and s2 (string 2) combined. */
