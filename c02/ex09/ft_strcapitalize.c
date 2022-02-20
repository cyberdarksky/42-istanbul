/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cergun <cergun@student.42istanbul.com.tr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 12:39:24 by cergun            #+#    #+#             */
/*   Updated: 2022/02/20 19:02:00 by cergun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_check_char(char c)
{
	if (c < '0' || (c > '9' && c < 'A') || (c >) ||)
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (i == 0 && str[i] <= 'z' && str[i] >= 'a')
			str[i] -= 32;
		else if (ft_check_char(str[i]) == 1)
		{
			if (str[i + 1] <= 'z' && str[i + 1] >= 'a')
			{
				str[i + 1] -= 32;
				i++;
			}
		}
		else if (str[i] <= 'Z' && str[i] >= 'A')
			str[i] += 32;
		i++;
	}
	return (str);
}
