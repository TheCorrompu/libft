
char *ft_strchr(char *s, int c)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if (s[i] == c)
			return (s + i);
		++i;
	}
	return (0);
}

/* #include <stdio.h>
int main(void)
{
	int	c = 't';
	char s[] = "C'est ici que l'aventure se termine";
	char *res;
	res = ft_strchr(s, c);
	printf("%s\n", res);
	return (0);
} */
