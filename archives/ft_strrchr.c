
#include <stddef.h>
char	*ft_strrchr(const char *s, int c)
{
	int	i;
	int	max;

	i = 0;
	max = 0;
	while (s[i])
	{
		if (s[i] == c)
			max = i;
		++i;
	}
	if (max > 0)
		return ((char *)&s[max]);
	else
		return (NULL);
}

/* #include <stdio.h>
int main(void)
{
	char	*res;
	char	s[] = "Oui c'est bien ça haha";

	res = ft_strrchr(s, 'i');
	printf("%s\n", res);
	return (0);
} */