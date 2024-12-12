/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmarcos <tmarcos@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/15 19:39:53 by tmarcos           #+#    #+#             */
/*   Updated: 2024/09/16 13:24:25 by tmarcos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	i;
	int	sign;
	int	result;

	i = 0;
	sign = 1;
	result = 0;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = (result * 10) + (str[i] - '0');
		i++;
	}
	return (result * sign);
}
/*
#include <stdio.h>

int main (void)
{
	char str1[] = "   ---+--+1234ab567";
	char str2[] = "   42";
	char str3[] = "   +-42";
	char str4[] = "-2147483648";
	
	printf("Result of %s: %d\n", str1, ft_atoi(str1));
	printf("Result of %s: %d\n", str2, ft_atoi(str2));
	printf("Result of %s: %d\n", str3, ft_atoi(str3));
	printf("Result of %s: %d\n", str4, ft_atoi(str4));

    return(0);
}
*/
