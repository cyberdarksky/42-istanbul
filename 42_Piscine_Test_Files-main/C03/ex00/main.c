#include <stdio.h>
#include <string.h>

int		ft_strcmp(char *s1, char *s2);
void test(char *s1, char *s2, char*s3);

int		main()
{
	test("Mekala", "Nice test", "Nice");
	test("This", "Is", "Test");
	test("f", "asd", "");
	test("asdfgh.", "asd", " ");
	test("02", "asd", "98");
}
void test(char *s1, char *s2, char*s3)
{
	printf("Actual strcmp:\n");
	printf("s12: %d, s21: %d, s13: %d, s31: %d, s23: %d, s32: %d", strcmp(s1, s2), strcmp(s2, s1), strcmp(s1, s3), strcmp(s3, s1), strcmp(s2, s3), strcmp(s3, s2));
	printf("\nYour ft_strcmp:\n");
	printf("s12: %d, s21: %d, s13: %d, s31: %d, s23: %d, s32: %d", ft_strcmp(s1, s2), ft_strcmp(s2, s1), ft_strcmp(s1, s3), ft_strcmp(s3, s1), ft_strcmp(s2, s3), ft_strcmp(s3, s2));
	printf("\n\n");
}
