/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cergun <cergun@student.42istanbul.com.tr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 13:13:35 by cergun            #+#    #+#             */
/*   Updated: 2022/02/24 16:40:55 by cergun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print(char c)
{
	write(1, &c, 1);
}

int	ft_strlen(char *s)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}	

int	ft_check_base(char *base)
{
	int	i;
	int	j;

	if (ft_strlen(base) <= 1)
		return (1);
	i = 0;
	while (base[i] != '\0')
	{
		if (base[i] == '-' || base[i] == '+')
			return (1);
		j = i + 1;
		while (base[j] != '\0')
		{
			if (base[i] == base[j])
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	len;

	len = ft_strlen(base);
	if (ft_check_base(base) != 0)
		return ;
	if (nbr < 0)
	{
		ft_print('-');
		nbr *= -1;
		ft_putnbr_base(nbr, base);
	}
	else if (nbr > len - 1)
	{
		ft_putnbr_base(nbr / len, base);
		ft_putnbr_base(nbr % len, base);
	}
	else
		ft_print(base[nbr]);
}
/*
#include <stdio.h>

int main()
{
	ft_putnbr_base(-15,"01");
	printf("\n");
	ft_putnbr_base(6, "01");
	printf("\n");
	ft_putnbr_base(6, "ce");
	printf("\n");
	ft_putnbr_base(677, "0123456789");
	printf("\n");
	ft_putnbr_base(65, "0123456789ABCDEF");
	printf("\n");
	ft_putnbr_base(100, "01234567");
	printf("\n");
	ft_putnbr_base(100, "poneyvif");
	printf("\n");
}
*/
