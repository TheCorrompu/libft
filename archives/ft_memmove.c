
#include <stddef.h>
void	*ft_memmove(void *dst, const void *src, size_t n)
{
	const unsigned char *s1;
	unsigned char *s2;

	s1 = (const unsigned char *)src;
	s2 = (unsigned char *)dst;
	if (dst == src || n == 0)
		return (dst);
	if (dst < src)
	{
		while (n--)
			*s2++ = *s1++;
	}
	else
	{
		s2 += n;
		s1 += n;
		while (n--)
			*--s2 = *--s1;
	}
	return (dst);
}

/* #include <stdio.h>
int main(void)
{
	void *res;
	unsigned char s[20] = "abcdefg";
	res = ft_memmove(s + 3, s, 6);
	printf("%s\n", (unsigned char *)res);
	return (0);
} */