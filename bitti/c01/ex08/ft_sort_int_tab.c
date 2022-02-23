/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cergun <cergun@student.42istanbul.com.tr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 14:37:01 by cergun            #+#    #+#             */
/*   Updated: 2022/02/15 14:51:58 by cergun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int		tmp;
	int		index;
	int		next;

	index = 0;
	while (index < size - 2)
	{
		next = index + 1;
		while (next < size)
		{
			if (tab[index] > tab[next])
			{
				tmp = tab[index];
				tab[index] = tab[next];
				tab[next] = tmp;
			}
			next++;
		}
		index++;
	}
}
