

int ft_isdigit(char c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

/* #include <stdio.h>
int main(void)
{
	int value;

	value = ft_isdigit('7');
	printf("%d\n", value);
	return (0);
} */