/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cergun <cergun@student.42istanbul.com.tr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 14:09:42 by cergun            #+#    #+#             */
/*   Updated: 2022/02/16 15:31:12 by cergun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	index;

	index = 0;
	while (str[index] != '\0')
	{	
		if ((str[index] < 'A') || (str[index] > 'z'))
			return (0);
		else if ((str[index] < 'a') && (str[index] > 'Z'))
			return (0);
		index++;
	}
	return (1);
}
