#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

#include "ft_stock_str.h"

struct s_stock_str	*ft_strs_to_tab(int ac, char **av);
void ft_show_tab(struct s_stock_str *par);

int	main(int argc, char **argv)
{
	int					index;
	struct s_stock_str	*structs;

	structs = ft_strs_to_tab(argc, argv);
	ft_show_tab(structs);
}
