int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	else
		return (nb * ft_recursive_power(nb, power - 1));
}
/*
#include <stdio.h>

int main()
{
	int i = 2;
	int p = 2;
	printf("Int: %d, power: %d, result: %d\n", i, p, ft_recursive_power(i, p));
}
*/
