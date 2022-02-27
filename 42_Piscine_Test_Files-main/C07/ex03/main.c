/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecerquei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/09 18:19:21 by ecerquei          #+#    #+#             */
/*   Updated: 2019/12/09 18:49:42 by ecerquei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char *ft_strjoin(int size, char **strs, char *sep);

int	main(void)
{
	char *text[8] = {"Testing", "this", "funtion", "called", "ft_strjoin", "with", "seperator"};
	text[7] = ",";
	printf("%s\n", ft_strjoin(8 , text, ", "));

	char *text1[8] = {"Testing", "this", "funtion", "called", "ft_strjoin", "with", "seperator"};
	text1[7] = "*";
	printf("%s\n", ft_strjoin(8 , text1, "*"));

	char *text2[8] = {"Testing", "this", "funtion", "called", "ft_strjoin", "with", "seperator"};
	text2[7] = " ";
	printf("%s\n", ft_strjoin(8 , text2, " "));

	char *text3[8] = {"Testing", "this", "funtion", "called", "ft_strjoin", "with", "seperator"};
	text3[7] = "";
	printf("%s\n", ft_strjoin(8 , text3, ""));

	char *text4[8] = {"Testing", "this", "funtion", "called", "ft_strjoin", "with", "seperator"};
	text4[7] = ",";
	printf("%s\n", ft_strjoin(5 , text4, ", "));

	char *text5[8] = {"Testing", "this", "funtion", "called", "ft_strjoin", "with", "seperator"};
	text5[7] = ",";
	printf("%s\n", ft_strjoin(0 , text5, ", "));

	char *text6[8] = {"Testing", "this", "funtion", "called", "ft_strjoin", "with", "seperator"};
	text6[7] = ",";
	printf("%s\n", ft_strjoin(1 , text6, ", "));
}
/*
Output should be:
Testing, this, funtion, called, ft_strjoin, with, seperator, ,
Testing*this*funtion*called*ft_strjoin*with*seperator**
Testing this funtion called ft_strjoin with seperator
Testingthisfuntioncalledft_strjoinwithseperator
Testing, this, funtion, called, ft_strjoin

Testing
*/
