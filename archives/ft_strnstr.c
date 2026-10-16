
#include <stddef.h>
char	*ft_strnstr(const char *haystack, const char *needle, int len)
{
	int	i;
	int	j;

	i = 0;
	if (!*needle)
		return ((char *)haystack);
	while (haystack[i] && i < len)
	{
		j = 0;
		while (haystack[i + j] && needle[j] 
			&& haystack[i + j] == needle[j] && i + j < len)
			++j;
		if (needle[j] == '\0')
			return ((char *)&haystack[i]);
		++i;
	}
	return (NULL);
}

/* #include <stdio.h>
int main(void)
{
	char *res;

	res = ft_strnstr("Bonjour tous le monde!","", 30);
	printf("%s\n", res);
	return (0);
} */