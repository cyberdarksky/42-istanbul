#include <stdio.h>
#include <string.h>
#include <bsd/string.h>
// First you need to install libbsd-dev in linux type "sudo apt-get install libbsd-dev"
// For compiling you need to type "gcc *.c -lbsd"
unsigned int ft_strlcat(char *dest, char *src, unsigned int size);
void test(char *dest, char *src, unsigned int size);

int		main(void)
{
	unsigned int size;

	char dest[20] = "1234";
	char src[20] = "567";
	size = 2;
	test(dest, src, size);

	char dest1[20] = "1234";
	char src1[20] = "567";
	size = 4;
	test(dest1, src1, size);

	char dest2[20] = "1234";
	char src2[20] = "567";
	size = 5;
	test(dest2, src2, size);

	char dest3[20] = "1234";
	char src3[20] = "56789";
	size = 6;
	test(dest3, src3, size);

	char dest4[20] = "1234";
	char src4[20] = "56789";
	size = 3;
	test(dest4, src4, size);

	char dest5[20] = "1234";
	char src5[20] = "567890";
	size = 5;
	test(dest5, src5, size);

	char dest6[20] = "";
	char src6[20] = "567890";
	size = 5;
	test(dest6, src6, size);

	char dest7[20] = "";
	char src7[20] = "56";
	size = 10;
	test(dest7, src7, size);

	char dest8[20] = "12345";
	char src8[20] = "";
	size = 6;
	test(dest8, src8, size);
}
void test(char *dest, char *src, unsigned int size)
{
	char dest1[20] = {0};
	char src1[20] = {0};
	unsigned int size1 = size;

	strcpy(dest1, dest);
	strcpy(src1, src);

	printf("Actual strlcat:\n");
	printf("dest = %s\nsrc = %s\nsize = %d\n", dest, src, size);
	printf("Return: %ld\n", strlcat(dest, src, size));
	printf("dest = %s\n", dest);

	printf("\n");

	printf("Your ft_strlcat:\n");
	printf("dest = %s\nsrc = %s\nsize = %d\n", dest1, src1, size1);
	printf("Return: %d\n", ft_strlcat(dest1, src1, size1));
	printf("dest = %s", dest1);
	printf("\n-----------------------\n");
}
