int	ft_iterative_power(int nb, int power)
{
	int total;

	total = 1;
	if (power < 0)
		return (0);
	while (power > 0)
	{
		total *= nb;
		power--;
	}
	return (total);
}
/*
#include <stdio.h>

int main()
{
	int i = 0;
	int p = 0;
	printf("Int: %d, power: %d, result: %d\n", i, p, ft_iterative_power(i, p));
}
*/
