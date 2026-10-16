
#include <stddef.h>
void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*cpy;

	cpy = (unsigned char *)s;
	while(n--)
	{
		*cpy = (unsigned char)c;
		++cpy;
	}
	return (s);
}

/* #include <stdio.h>
int	main(void)
{
	unsigned	char *res;
	unsigned	char src[] = "Hjf87!eg8Z";
	res = ft_memset(src, '0', 10);
	printf("%s\n", res);
	return (0);
} */