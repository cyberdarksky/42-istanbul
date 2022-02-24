/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cergun <cergun@student.42istanbul.com.tr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 11:41:51 by cergun            #+#    #+#             */
/*   Updated: 2022/02/23 18:02:08 by cergun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	total;

	total = 1;
	if (power < 0)
		return (0);
	while (power > 0)
	{
		total *= nb;
		power--;
	}
	return (total);
}
/*
#include <stdio.h>

int main()
{
	int i = 0;
	int p = 0;
	printf("Int: %d, power: %d, result: %d\n", i, p, ft_iterative_power(i, p));
}
*/
