#include "libft/libft.h"

#include <stddef.h>

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	ldst;
	size_t	i;

	ldst = 0;
	while (dst[ldst] && ldst < size)
		ldst++;
	if (size == ldst)
		return (size + ft_strlen(src));
	i = 0;
	while (src[i] && ldst + i + 1 < size)
	{
		dst[ldst + i] = src[i];
		i++; 
	}
	dst[ldst + i] = '\0';
	return (ldst + ft_strlen(src));
}

/* #include <stdio.h>
int	main(void)
{
	char buf[17] = "Bonjour ";
	size_t res;
	res = ft_strlcat(buf, "le monde entier", sizeof(buf));
	printf("buf = \"%s\", res = %zu\n", buf, res);
	return (0);
} */