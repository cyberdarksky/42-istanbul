int	ft_iterative_factorial(int nb)
{
	int i;
	int total;

	i = 1;
	total = 1;
	if (nb < 0)
		return (0);
	while (i <= nb)
	{
		total *= i;
		i++;
	}
	return (total);
}
/*
#include <stdio.h>

int	main()
{
	int i = 5;
	printf("Factorial %d is %d\n", i, ft_iterative_factorial(i));
}
*/
