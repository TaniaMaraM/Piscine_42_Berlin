/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmarcos <tmarcos@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 17:29:38 by tmarcos           #+#    #+#             */
/*   Updated: 2024/09/09 17:49:34 by tmarcos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= 32 && str[i] <= 126))
			return (0);
		i++;
	}
	return (1);
}
/*
#include <stdio.h>

int main ()
{
	printf ("test 01: %d\n", ft_str_is_printable ("!d#&*asd1254 "));
	printf ("test 02: %d\n", ft_str_is_printable ("\n\f"));
	printf("test empty space: %d\n", ft_str_is_printable (""));
}
*/
