#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t len)
{
	while (len--)
	{
		if (*(const unsigned char*)s == (unsigned char)c)
		{
			return ((void*)s);
		}
		++s;
	}
	return (NULL);
}
