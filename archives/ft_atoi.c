
int	ft_atoi(char *str)
{
	int	i;
	int	minus;
	int count;
	int result;

	i = 0;
	minus = 1;
	count = 0;
	result = 0;
	while (str[i] == '\t' || str[i] == '\n' || str[i] == '\r' 
		|| str[i] == '\v' || str[i] == '\f' ||str[i] == ' ')
		++i;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			minus = -1;
			count++;
		if (count == 2)
			return(0);
		++i;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + (str[i] - '0');
		++i;
	}
	return (result * minus);
}

/* #include <stdio.h>
int	main(void)
{
	int nb;
	nb = ft_atoi("");
	printf("%d\n", nb);
	return (0);
} */