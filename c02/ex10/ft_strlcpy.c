/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cergun <cergun@student.42istanbul.com.tr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 13:55:20 by cergun            #+#    #+#             */
/*   Updated: 2022/02/20 14:12:30 by cergun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;

	i = 0;
	if (size == 0)
		return (size);
	while (i < size - 1 && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	i = 0;
	while (src[i]  != '\0')
		i++;
	return (i);
}

#include <stdio.h>
#include <string.h>

int main()
{
	char dest[50];
	char *src;
	int size;

	src = "ceci et un test tu voissss";
	size = 10;
	printf("%d\n", ft_strlcpy(dest, src, size));
	printf("%s\n", dest);
	printf("%d\n",strlcpy(dest, src, size));
	printf("%s\n", dest);
}
