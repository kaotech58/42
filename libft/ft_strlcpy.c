#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	src_len;

	src_len = ft_strlen(src);
	if (src_len < size)
	{
		ft_memcpy(dst, src, src_len +1);
	}
	else if (size)
	{
		ft_memcpy(dst, src, size -1);
		dst[size -1] = '\0';
	}
	return (ft_strlen(src));
}