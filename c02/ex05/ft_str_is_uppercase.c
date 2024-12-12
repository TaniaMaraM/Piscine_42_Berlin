/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmarcos <tmarcos@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 17:19:20 by tmarcos           #+#    #+#             */
/*   Updated: 2024/09/09 17:28:39 by tmarcos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= 'A' && str[i] <= 'Z'))
			return (0);
		i++;
	}
	return (1);
}
/*
#include <stdio.h>

int main()
{
	printf("test 01: %d\n", ft_str_is_uppercase ("ABCDEFGHIJKLMNOPQRSTUVWXYZ"));
	printf("test 02: %d\n", ft_str_is_uppercase ("23kfi*5(;f]"));
	printf("test empty line: %d\n", ft_str_is_uppercase (""));
	return (0);
}
*/
