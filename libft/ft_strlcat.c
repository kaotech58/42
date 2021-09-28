#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	dst_length;
	size_t	src_length;

	dst_length = ft_strlen(dst);
	src_length = ft_strlen(src);
	if (!size || dst_length >= size)
	{
		return (size + src_length);
	}
	if (src_length < size - dst_length)
	{
		ft_memcpy(dst + dst_length, src, src_length + 1);
	}
	else
	{
		ft_memcpy(dst + dst_length, src, size - dst_length - 1);
		dst[size - 1] = '\0';
	}
	return (dst_length + src_length);
}
