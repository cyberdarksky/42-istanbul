/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cergun <cergun@student.42istanbul.com.tr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 16:49:10 by cergun            #+#    #+#             */
/*   Updated: 2022/02/23 17:54:15 by cergun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_prime(int nb)
{
	int	i;
	int	count;

	if ((nb < 2) || (nb != 2 && nb % 2 == 0))
		return (0);
	i = 1;
	count = 0;
	while (i <= nb / i)
	{
		if (nb % i == 0)
			count++;
		i += 2;
	}
	if (count == 1)
		return (1);
	return (0);
}

int	ft_find_next_prime(int nb)
{
	if (ft_prime(nb) == 1)
		return (nb);
	while (ft_prime(nb) == 0)
		nb++;
	return (nb);
}
/*
#include <stdio.h>

int main()
{
	int i = 12;
	printf("%d\n", ft_find_next_prime(i));
}
*/
