/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cergun <cergun@student.42istanbul.com.tr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 12:58:57 by cergun            #+#    #+#             */
/*   Updated: 2022/02/22 12:49:43 by cergun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	if (n == 0)
		return (0);
	if (s1[i] == '\0' || s2[i] == '\0')
		return (s1[i] - s2[i]);
	while (s1[i] != '\0' && s2[i] != '\0' && i < n)
	{
		if (s1[i] == s2[i])
			i++;
		else
			return (s1[i] - s2[i]);
	}
	return (0);
}
/*
#include <stdio.h>
#include <string.h>

int main()
{
	char a[1024] = "asdfasd";
	char b[1024] = "asfasdasfasd";

	unsigned int n = 111;

	printf("Strncmp: %d_\n", strncmp(a, b, n));
	printf("Mine: %d_\n", ft_strncmp(a, b, n));
}
*/
