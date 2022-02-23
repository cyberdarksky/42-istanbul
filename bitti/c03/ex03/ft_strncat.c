/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cergun <cergun@student.42istanbul.com.tr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 14:25:12 by cergun            #+#    #+#             */
/*   Updated: 2022/02/22 12:55:11 by cergun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlen(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	len;
	unsigned int	i;

	i = 0;
	len = ft_strlen(dest);
	while (src[i] != '\0' && i < nb)
	{
		dest[len + i] = src[i];
		i++;
	}
	dest[len + i] = '\0';
	return (dest);
}
/*
#include <string.h>
#include <stdio.h>

int main()
{
	char a[1024] = "ahmet";
	char b[1024] = "mehmet";
	char c[1024] = "ahmet";
	char d[1024] = "mehmet";

	unsigned int n = 111;

	printf("Strncat: %s___\n", strncat(a, b, n));
	printf("Mine: %s___\n", ft_strncat(c, d, n));
}
*/
