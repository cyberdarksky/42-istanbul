#include <stdio.h>

void	ft_putstr(char *str);

int		main(void)
{
	char str[] = "Mekala!";
	ft_putstr(str);
	printf("\n");

	char str1[] = "Tes\nt";
	ft_putstr(str1);
	printf("\n");

	char str2[] = "";
	ft_putstr(str2);
	printf("\n");

	char str3[] = "Nic\0e";
	ft_putstr(str3);
	printf("\n");
}
/*
Output should be:
Mekala!
Tes
t

Nic
*/
