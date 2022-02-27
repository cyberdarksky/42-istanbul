#include <stdio.h>
#include <string.h>

char	*ft_strcat(char *dest, char *src);
void test(char *dest, char *src);

int		main(void)
{
	char dest[100] = "Hi";
	char src[100] = ", my name is Eren!";
	test(dest, src);

	char dest1[100] = "Test is good";
	char src1[100] = ", nice";
	test(dest1, src1);

	char dest2[100] = ".*08asdgvxc";
	char src2[100] = "çşasojf4729248";
	test(dest2, src2);

	char dest3[100] = "";
	char src3[100] = "çşasojf4729248";
	test(dest3, src3);

	char dest4[100] = ".*08asdgvxc";
	char src4[100] = "";
	test(dest4, src4);
}

void test(char *dest, char *src)
{
	char desti[100] = {0};
	char srci[100] = {0};

	strcpy(desti, dest);
	strcpy(srci, src);
	printf("Actual strcat:\n");
	printf("dest = %s\nsrc = %s\n", dest, src);
	printf("Returned Value: %s\n", strcat(dest, src));
	printf("result = %s\n", dest);

	printf("\n");

	printf("Your ft_strcat:\n");
	printf("dest = %s\nsrc = %s\n", desti, srci);
	printf("Returned Value: %s\n", ft_strcat(desti, srci));
	printf("result = %s\n", desti);

	printf("\n-----------------------\n");
}
