
#include <stddef.h>
int	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

size_t	ft_strlcpy(char *dst, const char *src, size_t n)
{
	size_t	i;

	i = 0;
	if (n > 0)
	{
		while (src[i] && i < n - 1)
		{
			dst[i] = src[i];
			++i;
		}
		dst[i] = '\0';
	}
	return (ft_strlen(src));
}

/* #include <stdio.h>
int	main(void)
{
	char buf[8];
	size_t res;

	res = ft_strlcpy(buf, "Bonjour tout le monde", sizeof buf);
	printf("copie : \"%s\"\n", buf);
	printf("retour : %zu\n", res);
	return (0);
} */