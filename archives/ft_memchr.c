
#include <string.h>
void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char *p;
	size_t i;

	p = s;
	i = 0;
	while (i < n)
	{
		if(p[i] == (unsigned char)c)
			return((void *)(p + i));
		++i; 
	}
	return (NULL);
}

/* #include <stdio.h>
int	main(void)
{
	void	*res;
	unsigned char str[] = "Hello world";
	res = ft_memchr(str, 'o', 8);
	printf("%s\n", (char *)res);
	return (0);
} */