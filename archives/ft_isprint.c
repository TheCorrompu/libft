
int ft_isprint(char c)
{
	if (c >= 32 && c <= 126)
		return (1);
	return (0);
}

/* #include <stdio.h>
int main(void)
{
	int value;

	value = ft_isprint('\n');
	printf("%d\n", value);
	return (0);
} */