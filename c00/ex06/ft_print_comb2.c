/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cergun <cergun@student.42istanbul.com.tr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 16:43:42 by cergun            #+#    #+#             */
/*   Updated: 2022/02/13 17:21:18 by cergun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb2(void)
{
	int		first;
	int		second;

	first = 0;
	second = 0;
	while (first < 99)
	{
		second = first + 1;
		while (second < 100)
		{
			ft_print((first / 10) + '0');
			ft_print((first % 10) + '0');
			write(1, " ", 1);
			ft_print((second / 10) + '0');
			ft_print((second % 10) + '0');
			if ((first != 98) || (second != 99))
				write(1, ", ", 2);
			second++;
		}
		first++;
	}
}

int	main(void)
{
	ft_print_comb2();
	return (0);
}
