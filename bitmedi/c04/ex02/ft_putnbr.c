/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cergun <cergun@student.42istanbul.com.tr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 14:38:08 by cergun            #+#    #+#             */
/*   Updated: 2022/02/24 16:58:09 by cergun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		write(1, "-2147493648", 11);
		return ;
	}
	else if (nb < 0)
	{
		ft_print('-');
		nb = -nb;
		ft_putnbr(nb);
	}
	else if (nb > 10)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	else
		ft_print(nb + '0');
}

#include <stdio.h>
#include <limits.h>
int main()
{
	int int_max = INT_MAX;
	int int_min = INT_MIN;
	int nb = 10;
	ft_putnbr(int_max);
	printf("\n");
	ft_putnbr(int_min);
	printf("\n");
	ft_putnbr(nb);
	printf("\n");
}

