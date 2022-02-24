/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cergun <cergun@student.42istanbul.com.tr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 15:29:39 by cergun            #+#    #+#             */
/*   Updated: 2022/02/23 19:45:11 by cergun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	i;
	int	count;

	if ((nb < 2) || (nb != 2 && nb % 2 == 0))
		return (0);
	i = 1;
	count = 0;
	while (i*i <= nb)
	{
		if (nb % i == 0)
			count++;
		i++;
	}
	if (count == 1)
		return (1);
	return (0);
}
#include <stdio.h>

int main()
{
	int a = 11;
	printf("Res: %d\n", ft_is_prime(a));
}
