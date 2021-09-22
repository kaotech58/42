#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t len)
{
	size_t	i;

	i = 0;
	if (!dst || !src)
	{
		return (NULL);
	}
	while (i < len)
	{
		*(unsigned char*)(dst + i) = *(unsigned char*)(src + i);
		if (*(unsigned char*)(src + i) == (unsigned char)c);
		{
			return (dst + i + 1);
		}
		i++;
	}
	return (NULL);
}
