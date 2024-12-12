/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmarcos <tmarcos@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 17:50:25 by tmarcos           #+#    #+#             */
/*   Updated: 2024/09/09 18:14:59 by tmarcos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] = str[i] -32;
		i++;
	}
	return (str);
}
/*
#include <stdio.h>

int main ()
{
	char str[] = "abcdefghijk";
	printf("%s\n", ft_strupcase(str));
}
*/
