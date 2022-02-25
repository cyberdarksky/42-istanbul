/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cergun <cergun@student.42istanbul.com.tr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 11:42:29 by cergun            #+#    #+#             */
/*   Updated: 2022/02/23 11:42:48 by cergun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_rec_fib(int index, int a, int b)
{
	if (index < 0)
		return (-1);
	if (index == 0)
		return (0);
	if (index == 1)
		return (b);
	else
		return (ft_rec_fib(index - 1, b, a + b));
}

int	ft_fibonacci(int index)
{
	return (ft_rec_fib(index, 0, 1));
}
/*
#include <stdio.h>

int main()
{
	int i = 10;
	printf("Index: %d, factorial: %d\n", i, ft_fibonacci(i));
}
*/