#include <unistd.h>

void	ft_print(char c)
{
	write(1, &c, 1);
}

int	main(int argc, char *argv[])
{
	int	i;
	int	j;

	if (argc == 1)
		return (0);
	i = argc - 1;
	while (i >= 0)
	{
		j = 0;
		while (argv[i][j])
		{
			ft_print(argv[i][j]);
			j++;
		}
		ft_print('\n');
		i--;
	}
	return (0);
}
