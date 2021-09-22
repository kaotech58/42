#include "libft.h"

void *ft_calloc(size_t nmemb, size_t size)
{
	size_t	total;
	void	*ptr;

	total = nmemb * size;
	ptr = malloc(total);
	if (!ptr)
	{
		return (NULL);
	}
	ft_bzero(ptr, total);
	return (ptr);
}
