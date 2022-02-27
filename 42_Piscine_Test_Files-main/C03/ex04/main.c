#include <stdio.h>
#include <string.h>

char *ft_strstr(char *str, char *to_find);
void test(char *str, char *to_find);

int		main(void)
{
	char str[50] = "012340123456789";
	char to_find[50] = "456";
	test(str, to_find);

	char str1[50] = "5345789234789";
	char to_find1[50] = "789";
	test(str1, to_find1);

	char str2[50] = "456802";
	char to_find2[50] = "345";
	test(str2, to_find2);

	char str3[50] = "12357123";
	char to_find3[50] = "543";
	test(str3, to_find3);

	char str4[50] = "012340123456789";
	char to_find4[50] = "";
	test(str4, to_find4);

	char str5[50] = "";
	char to_find5[50] = "346";
	test(str5, to_find5);
}

void test(char *str, char *to_find)
{
	char str1[50] = {0};
	char to_find1[50] = {0};

	strcpy(str1, str);
	strcpy(to_find1, to_find);

	printf("Actual strstr:\n");
	printf("str = %s\nto_find = %s\n", str, to_find);
	printf("Return Value:%s\n", strstr(str, to_find));

	printf("\n");

	printf("Your ft_strstr:\n");
	printf("str = %s\nto_find = %s\n", str1, to_find1);
	printf("Return Value:%s\n", ft_strstr(str1, to_find1));
	printf("\n------------------------\n");
}
