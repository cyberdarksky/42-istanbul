/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cergun <cergun@student.42istanbul.com.tr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 14:28:20 by cergun            #+#    #+#             */
/*   Updated: 2022/02/22 18:24:48 by cergun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}
/*
#include <string.h>
#include <stdio.h>

int main()
{
	char a[1024] = "Bu 29 uzunlugunda bir string.";
	printf("Strlen: %lu\n", strlen(a));
	printf("Mine: %d\n", ft_strlen(a));
}
*/
