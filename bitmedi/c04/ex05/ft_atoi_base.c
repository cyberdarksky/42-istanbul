/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cergun <cergun@student.42istanbul.com.tr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 14:13:36 by cergun            #+#    #+#             */
/*   Updated: 2022/02/24 16:34:39 by cergun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
		if (base[i] == '-' || base[i] '+')
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

int	ft_sign(char *s)
{
	int	i;
	int	sign;

	i = 0;
	sign = 1;
	while ((str[i] >= '\t' && str[i] <= '\r') || str[i] == ' ')
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	return (sign);
}

int	ft_atoi_base(char *str, char *base)
{
	int	number;
	int	i;
	int	sign;

	if (ft_check_base(base) != 0)
		return (0);
	sign = ft_sign(base);
	number = 0;
	while (str[i] >= '0' && str[i] <= '9')
	{
		number = number * 10 + str[i] - '0';
		i++;
	}
	return (sign * number);
}
/*
#include <stdio.h>

int	main(int argc, char *argv[])
{
	if (argc != 3)
		return (0);
	printf("%d\n", ft_atoi_base(argv[1], argv[2]));
	char s[123] = "   ---+--+1234ab567";
	char d[123] = "0123456789";
	char b[123] = "01";
	char h[123] = "0123456789abcdef";
	char o[123] = "poneyvif";
	printf("%d\n", ft_atoi_base(s, d));
}
*/
