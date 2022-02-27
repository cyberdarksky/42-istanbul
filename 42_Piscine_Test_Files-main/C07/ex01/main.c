#include <stdio.h>

int		*ft_range(int min, int max);
void	print_test(int *test, int size);

int	main(void)
{
	int *test0;
	int *test1;
	int *test2;
	int *test3;
	int *test4;

	test0 = ft_range(1, 11);
	printf("Test0 (1, 11):\n");
	print_test(test0, 10);

	test1 = ft_range(2, 1);
	printf("Ttest1 (2, 1):\n");
	print_test(test1, 0);

	test2 = ft_range(3, 3);
	printf("Test2 (3, 3):\n");
	print_test(test2, 0);

	test3 = ft_range(4, 41);
	printf("Test3 (4, 41):\n");
	print_test(test3, 37);

	test4 = ft_range(10, -10);
	printf("Test4 (10, -10):\n");
	print_test(test4, 0);
}

void	print_test(int *test, int size)
{
	int i;

	for (i = 0; i < size - 1; i++)
	{
		printf("%d, ", test[i]);
	}
	if (size > 0)
		printf("%d\n", test[size - 1]);
}
/*
Should display:
Test0 (1, 11):
1, 2, 3, 4, 5, 6, 7, 8, 9, 10
Ttest1 (2, 1):
Test2 (3, 3):
Test3 (4, 41):
4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22,
23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40
Test4 (10, -10):
*/
