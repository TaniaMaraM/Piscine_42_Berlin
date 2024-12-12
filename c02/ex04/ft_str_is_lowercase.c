/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmarcos <tmarcos@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 15:54:45 by tmarcos           #+#    #+#             */
/*   Updated: 2024/09/09 16:07:40 by tmarcos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= 'a' && str[i] <= 'z'))
			return (0);
		i++;
	}
	return (1);
}
/*
#include <stdio.h>

int main()
{
	printf("test 01: %d\n", ft_str_is_lowercase ("abcdefghijklmnopqrstuwxyz"));
	printf("test 02: %d\n", ft_str_is_lowercase ("12%^&[9(7{6;ll"));
	printf("test empty line: %d\n", ft_str_is_lowercase (""));
		return(0);	
}
*/
