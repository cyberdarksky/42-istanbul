#include <stdio.h>
#include <stdlib.h>

char *ft_strdup(char *src);

int	main(void)
{
	char *test;
	char *dup;

	test = "Testing the strdup function!";
	printf("test = %s\n", test);
	dup = ft_strdup(test);
	printf("dup  = %s\n", dup);
	free(dup);
}
/*
Output should be:
test = Testing the strdup function!
dup  = Testing the strdup function!
*/
