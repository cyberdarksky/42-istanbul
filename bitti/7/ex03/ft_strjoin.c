/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cergun <cergun@student.42istanbul.com.tr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 16:14:11 by cergun            #+#    #+#             */
/*   Updated: 2022/03/02 16:48:53 by cergun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strcpy(char	*dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	while (dest[i])
		i++;
	j = 0;
	while (src[j])
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
	return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*arr;
	int		i;

	if (size == 0)
	{
		arr = malloc(1);
		return (arr);
	}
	if (arr == NULL)
		return (NULL);
	arr = malloc(sizeof(strs));
	i = 0;
	while (i < size)
	{
		ft_strcpy(arr, strs[i]);
		if (i != size - 1)
			ft_strcpy(arr, sep);
		i++;
	}
	i = 0;
	while (arr[i])
		i++;
	arr[i] = '\0';
	return (arr);
}
/*
#include <stdio.h>

int	main(void)
{
	char *text[10];

	text[0] = "Testando";
	text[1] = "a";
	text[2] = "funcao";
	text[3] = "ft_strjoin";
	text[4] = "com";
	text[5] = "o";
	text[6] = "separador";
	text[7] = "\' - \'";
	text[8] = "e tamanho";
	text[9] = "10";

	printf("%s\n", ft_strjoin(10, text, " - "));
}
*/
