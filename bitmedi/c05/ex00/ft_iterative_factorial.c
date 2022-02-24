/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cergun <cergun@student.42istanbul.com.tr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 11:41:02 by cergun            #+#    #+#             */
/*   Updated: 2022/02/23 11:41:25 by cergun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	i;
	int	total;

	i = 1;
	total = 1;
	if (nb < 0)
		return (0);
	while (i <= nb)
	{
		total *= i;
		i++;
	}
	return (total);
}
/*
#include <stdio.h>

int	main()
{
	int i = 5;
	printf("Factorial %d is %d\n", i, ft_iterative_factorial(i));
}
*/
