#include <stdio.h>

int		ft_strlen(char *str);

int		main (void)
{
	char str[] = "Mekala";
	printf("%d\n", ft_strlen(str));

	char str1[] = "Test";
	printf("%d\n", ft_strlen(str1));

	char str2[] = "";
	printf("%d\n", ft_strlen(str2));

	char str3[] = "\n";
	printf("%d\n", ft_strlen(str3));

	char str4[] = "-7124";
	printf("%d\n", ft_strlen(str4));
}
/*
Output should be
6
4
0
1
5
*/
