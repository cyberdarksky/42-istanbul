/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cergun <cergun@student.42istanbul.com.tr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 13:53:10 by cergun            #+#    #+#             */
/*   Updated: 2022/02/14 15:04:57 by cergun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print(char c)
{
	write(1, &c, 1);
}

void	ft_digits(int a, int b)
{
	ft_print((a / 10) + '0');
	ft_print((a % 10) + '0');
	write(1, " ", 1);
	ft_print((b / 10) + '0');
	ft_print((b % 10) + '0');
	if ((a == 98) && (b == 99))
		return ;
	write(1, ", ", 2);
}

void	ft_print_comb2(void)
{
	int		i;
	int		j;

	i = 0;
	j = 1;
	while (i < 99)
	{
		j = i + 1;
		while (j < 100)
		{
			ft_digits(i, j);
			j++;
		}
		i++;
	}
}

int	main(void)
{
	ft_print_comb2();
}
