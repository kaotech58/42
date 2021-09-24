#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t len)
{
	while (len > 0 && *s1 != '\0' && *s2 != '\0')
	{
		if (*s1 != *s2)
		{
			break;
		}
		++s1;
		++s2;
		--len;
	}
	if (len == 0)
	{
		return (0);
	}
	return (*(unsigned char*)s1 - *(unsigned char*)s2);
}
