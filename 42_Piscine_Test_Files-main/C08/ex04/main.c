#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

#include "ft_stock_str.h"
struct s_stock_str	*ft_strs_to_tab(int ac, char **av);

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	while (*str != '\0')
	{
		ft_putchar(*str);
		str ++;
	}
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		ft_putchar('-');
		ft_putchar('2');
		nb = 147483648;
	}
	if (nb < 0)
	{
		ft_putchar('-');
		nb *= -1;
	}
	if (nb < 10)
	{
		ft_putchar(nb + 48);
		return ;
	}
	else
		ft_putnbr(nb / 10);
	ft_putnbr(nb % 10);
}

void ft_show_tab(struct s_stock_str *par)
{
	int	i;

	i = 0;
	while (par[i].str != 0)
	{
		ft_putstr("Str:\n");
		ft_putstr(par[i].str);
		ft_putstr("\n");
		ft_putstr("Size:\n");
		ft_putnbr(par[i].size);
		ft_putstr("\n");
		ft_putstr("Copy:\n");
		ft_putstr(par[i].copy);
		ft_putstr("\n");
		ft_putstr("\n");
		i ++;
	}
}

int	main(int argc, char **argv)
{
	int					index;
	struct s_stock_str	*structs;

	structs = ft_strs_to_tab(argc, argv);
	ft_show_tab(structs);
}
