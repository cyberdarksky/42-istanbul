/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cergun <cergun@student.42istanbul.com.tr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 18:38:34 by cergun            #+#    #+#             */
/*   Updated: 2022/02/14 19:41:05 by cergun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	arr[];
	int	index;

	index = 0;
	while (index < size)
	{
		arr[size - index - 1] = tab[index];
		index++;
	}
	index = 0;
	while (index < size)
	{
		tab[index] = arr[index];
		index++;
	}
}

int main()
{
	int a[] = {1, 2, 3, 4, 5};
	ft_rev_int_tab(a, 5);

	for(int i = 0;i < 5; i++)
	{
		printf("%i", a[i]);
	}
}
