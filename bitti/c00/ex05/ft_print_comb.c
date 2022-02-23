/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cergun <cergun@student.42istanbul.com.tr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 11:57:32 by cergun            #+#    #+#             */
/*   Updated: 2022/02/14 12:14:22 by cergun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print(char x, char y, char z)
{
	write(1, &x, 1);
	write(1, &y, 1);
	write(1, &z, 1);
}

void	ft_print_comb(void)
{
	char	f;
	char	s;
	char	t;

	f = '0';
	while (f < '8')
	{
		s = f + 1;
		while (s < '9')
		{
			t = s + 1;
			while (t <= '9')
			{
				ft_print(f, s, t);
				if (f == '7' && s == '8' && t == '9')
					break ;
				write(1, ", ", 2);
				t++;
			}
			s++;
		}
		f++;
	}
}
