#include <stdio.h>

#include "ft_abs.h"

int	main(void)
{
	int	index;

	index = -5;
	while (index < 5)
	{
		printf("macros::abs(%d) = %d\n", index, ABS(index));
		index++;
	}
}
/*
Output should be:
macros::abs(-5) = 5
macros::abs(-4) = 4
macros::abs(-3) = 3
macros::abs(-2) = 2
macros::abs(-1) = 1
macros::abs(0) = 0
macros::abs(1) = 1
macros::abs(2) = 2
macros::abs(3) = 3
macros::abs(4) = 4
*/
