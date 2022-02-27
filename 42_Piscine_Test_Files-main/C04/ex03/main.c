#include <stdio.h>

int		ft_atoi(char *str);

int		main(void)
{
	printf("%d\n", ft_atoi(" ---+--+1234ab567"));
	printf("%d\n", ft_atoi("---+--+4526--+-sdb6"));
	printf("%d\n", ft_atoi("    21a	47--+-5gsdf"));
	printf("%d\n", ft_atoi("    abc	--a61as"));
	printf("%d\n", ft_atoi("as	 f--+-a12t"));
	printf("%d\n", ft_atoi("a147 -+-ab567"));
	printf("%d\n", ft_atoi("+++12091"));
	printf("%d\n", ft_atoi("-a214"));
	printf("%d\n", ft_atoi("		 \r-214"));
	printf("%d\n", ft_atoi("		 \v-2513"));

}
/*
Output should be:
-1234
-4526
21
0
0
0
12091
0
-214
-2513
*/
