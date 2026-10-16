#include <strings.h>

void	ft_bzero(void *s, size_t n)
{
	unsigned char *p = s;
	while (n--)
	{
		*p++ = 0;
	}
}
