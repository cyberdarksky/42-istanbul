int	ft_atoi(char *str)
{
	int	sign;
	int	number;
	int	i;

	i = 0;
	sign = 1;
	while (str[i] < '0' || str[i] > '9')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	number = 0;
	while (str[i] >= '0' && str[i] <= '9')
	{
		number = (number * 10) + (str[i] - '0');
		i++;
	}
	return (number * sign);
}
/*
#include <stdio.h>

int main(int argc, char *argv[])
{
	if (argc != 2)
		return (0);
	printf("Mine: %d\n", ft_atoi(argv[1]));
}
*/
