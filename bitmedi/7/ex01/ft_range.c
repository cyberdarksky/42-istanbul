#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int size;
	int	*arr;

	if (min >= max)
		return (NULL);
	i = 0;
	size = max - min;
	arr = (int *)malloc((size) * (sizeof(int)));
	while (i < size)
	{
		arr[i] = min + i;
		i++;
	}
	return (arr);
}
/*
#include <stdio.h>

int main()
{
	int *arr = ft_range(-6, 9);
	int i = 0;
	while (arr[i])
	{
		printf("(%i)", arr[i]);
		i++;
	}
	printf("\n");
}
*/
