/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cergun <cergun@student.42istanbul.com.tr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 18:02:23 by cergun            #+#    #+#             */
/*   Updated: 2022/02/22 13:00:35 by cergun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlen(char *s)
{
	unsigned int	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;

	if (size <= ft_strlen(dest))
		return (size + ft_strlen(src));
	i = 0;
	j = ft_strlen(dest);
	while (src[i] != '\0' && j < size - 1)
	{
		dest[j] = src[i];
		j++;
		i++;
	}
	dest[j] = '\0';
	return (ft_strlen(dest) + ft_strlen(&src[i]));
}

/*
#include <string.h>
#include <stdio.h>

int main()
{
	char a[1024] = "";
	char b[1024] = "yurdukafasi";

	char c[1024] = "";
	char d[1024] = "yurdukafasi";
	
	unsigned int size = 20;

	printf("Strlcat: %lu___\n", strlcat(a, b, size));
	printf("Strlcat: %s___\n", a);
	printf("Mine: %u___\n", ft_strlcat(c, d, size));
	printf("Mine: %s___\n", c);

}
*/
