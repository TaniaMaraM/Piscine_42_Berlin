/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmarcos <tmarcos@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 14:22:24 by tmarcos           #+#    #+#             */
/*   Updated: 2024/09/10 14:40:18 by tmarcos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!((str[i] >= 'A' && str[i] <= 'Z')
				|| (str[i] >= 'a' && str[i] <= 'z')))
			return (0);
		i++;
	}
	return (1);
}
/*
#include <stdio.h>

int main ()
{
	printf("test 01: %d\n", ft_str_is_alpha ("ABCDEFGHKLMNOPQRSTWUVYZ"));
	printf("test 02: %d\n", ft_str_is_alpha ("abcdrfghklmnopqrstwuvyz"));
	printf("test 03: %d\n", ft_str_is_alpha ("12423jhhu$3k"));
	printf("test 04: %d\n", ft_str_is_alpha ("12%6**;["));
       	printf("test empty line: %d\n", ft_str_is_alpha (""));	
	
	return(0);	
}
*/
