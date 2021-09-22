/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: teiffe <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/08 11:06:28 by teiffe            #+#    #+#             */
/*   Updated: 2021/09/08 13:53:46 by teiffe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <stdlib.h>
# include <unistd.h>
# ifndef INT_MIN
#  define INT_MIN -2147483648
# endif
# ifndef INT_MAX
#  define INT_MAX 2147483647
# endif

typedef struct	s_list
{
	void		*content;
	struct s_list	*next;
}	t_list;

typedef struct	s_split_next
{
	size_t	start;
	size_t	length;
}	t_spilt_next;

int	ft_atoi(const char *nptr);

void	ft_putchar(char c);

void	ft_putchar_fd(char c, int fd);

void	ft_putnbr(int n);

void	ft_putnbr_fd(int n, int fd);

int	ft_isalpha(int c);

int	ft_isdigit(int c);

int	ft_isalnum(int c);

int	ft_isascii(int c);

int	ft_isprint(int c);

size_t	ft_strlen(const char *s);

void	*ft_memset(void *b, int c, size_t len);

void	ft_bzero(void *s, size_t n);

int	ft_toupper(int c);

int	ft_tolower(int c);

char	*ft_strchr(const char *s, int c);
#endif
