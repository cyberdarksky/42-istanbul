#include <stdio.h>

void	ft_putnbr_base(int nbr, char *base);

int main(void)
{
	ft_putnbr_base(2002, "mekala");
	printf("\n");
	ft_putnbr_base(1453, "0123456789");
	printf("\n");
	ft_putnbr_base(1453, "");
	printf("\n");
	ft_putnbr_base(1453, "+123");
	printf("\n");
	ft_putnbr_base(1453, "-256");
	printf("\n");
	ft_putnbr_base(1453, "0122456789");
	printf("\n");
	ft_putnbr_base(-2453, "01");
	printf("\n");
	ft_putnbr_base(-1236, "ebyt");
	printf("\n");
	ft_putnbr_base(-21474838, "1");
	printf("\n");
	ft_putnbr_base(1873456, "01");
	printf("\n");
	ft_putnbr_base(-2147483648, "hardone");
	printf("\n");
}
/*
Output should be:
eaeal
1453




-100110010101
-betbbe

111001001011000110000
-ahoadoraaaer
*/
