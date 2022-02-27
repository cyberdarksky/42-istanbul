/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cergun <cergun@student.42istanbul.com.tr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/27 10:50:31 by cergun            #+#    #+#             */
/*   Updated: 2022/02/27 11:17:23 by cergun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *s)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	char	*arr;
	int		len;
	int		i;

	len = ft_strlen(src);
	arr = (char *)malloc(len * sizeof(s));
	i = 0;
	if (arr[i])
		return NULL;
	while (src[i])
	{
		arr[i] = str[i];
		i++;
	}
	arr[i] = '\0';
	return (arr);
}

#include <stdio.h>
#include <string.h>

int main()
{
	printf("%s\n", );
}
