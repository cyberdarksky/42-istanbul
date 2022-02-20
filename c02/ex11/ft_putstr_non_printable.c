#include <unistd.h>

void	ft_print(char c)
{
	write(1, &c, 1);
}

void	ft_hexa(char c)
{
	char	*hex;

	hex = "0123456789abcdef";
	ft_print('\\');
	ft_print(hex[c / 16]);
	ft_print(hex[c % 16]);
}

void	ft_putstr_non_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 32 || str[i] > 126)
			ft_hexa(str[i]);
		else
			ft_print(str[i]);
		i++;
	}
}

int main()
{
	char	*str;

	str = "Coucou\ntu vas bien ?";
	ft_putstr_non_printable(str);														
}
