#include <stdio.h>
#include <string.h>

int		ft_strncmp(char *s1, char *s2, unsigned int n);
void test(char *s1, char *s2, char *s3, unsigned int n);

int		main()
{
	test("Mekala", "Test is nice", "Nice", 5);
	test("Mekala", "Test is nice", "Nice Nice", 1);
	test("T", "as", "d", 100);
	test("asdf", " ", "a", 10);
	test("asdf", "", "a", 10);
	test("asdfsdg", "x", "abf", 0);
	test("asdf", "dfg", "x", -1);
	test("ali", "asd", "veli", 4);
}

void test(char *s1, char *s2, char *s3, unsigned int n)
{
	printf("Actual strncmp:\n");
	printf("s12: %d, s21: %d, s13: %d, s31: %d, s23: %d, s32: %d", strncmp(s1, s2, n), strncmp(s2, s1, n), strncmp(s1, s3, n), strncmp(s3, s1, n), strncmp(s2, s3, n), strncmp(s3, s2, n));
	printf("\nYour ft_strncmp:\n");
	printf("s12: %d, s21: %d, s13: %d, s31: %d, s23: %d, s32: %d", ft_strncmp(s1, s2, n), ft_strncmp(s2, s1, n), ft_strncmp(s1, s3, n), ft_strncmp(s3, s1, n), ft_strncmp(s2, s3, n), ft_strncmp(s3, s2, n));
	printf("\n-------------------------------\n");
}
