/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cergun <cergun@student.42istanbul.com.tr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 13:05:17 by cergun            #+#    #+#             */
/*   Updated: 2022/02/16 14:08:42 by cergun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	index;

	index = 0;
	while ((src[index] != '\0') || (index < n))
	{
		if (index >= n)
			dest[index] = '\0';
		dest[index] = src[index];
		index++;
	}
	dest[index + 1] = '\0';
	return (dest);
}
