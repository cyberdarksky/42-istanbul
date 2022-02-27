#include <stdio.h>
#include <string.h>

char *ft_strncat(char *dest, char *src, unsigned int nb);
void test(char *dest, char *src, unsigned int nb);

int		main(void)
{
	unsigned int nb;

	char dest[50] = "Mekala";
	char src[50] = "Test";
	nb = 8;
	test(dest, src, nb);

	char dest1[50] = "Test";
	char src1[50] = "asd";
	nb = 8;
	test(dest1, src1, nb);

	char dest2[50] = "123";
	char src2[50] = "4567890";
	nb = 2;
	test(dest2, src2, nb);

	char dest3[50] = "123";
	char src3[50] = "4567890";
	nb = 3;
	test(dest3, src3, nb);

	char dest4[50] = "123";
	char src4[50] = "4567890";
	nb = 0;
	test(dest4, src4, nb);

	char dest5[50] = "";
	char src5[50] = "4567890";
	nb = 3;
	test(dest5, src5, nb);

	char dest6[50] = "123";
	char src6[50] = "";
	nb = 100;
	test(dest6, src6, nb);
}

void test(char *dest, char *src, unsigned int nb)
{
	char dest1[50] = {0};
	char src1[50] = {0};
	unsigned int nb1 = nb;

	strcpy(dest1, dest);
	strcpy(src1, src);

	printf("Actual strncat:\n");
	printf("dest = %s\nsrc = %s\nnb = %d\n", dest, src, nb);
	printf("Returned Value: %s\n", strncat(dest, src, nb));
	printf("result = %s\n", dest);

	printf("\n");

	printf("Your ft_strncat:\n");
	printf("dest = %s\nsrc = %s\nnb = %d\n", dest1, src1, nb1);
	printf("Returned Value: %s\n", ft_strncat(dest1, src1, nb1));
	printf("result = %s", dest1);
	printf("\n----------------------\n");
}
