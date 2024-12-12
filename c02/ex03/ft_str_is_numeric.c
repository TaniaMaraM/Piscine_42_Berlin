/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmarcos <tmarcos@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 15:30:22 by tmarcos           #+#    #+#             */
/*   Updated: 2024/09/09 15:53:38 by tmarcos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= '0' && str[i] <= '9'))
			return (0);
		i++;
	}
	return (1);
}
/*
#include <stdio.h>

int main ()
{
	printf("test 01: %d\n", ft_str_is_numeric ("0123456789"));
	printf("test 02: %d\n", ft_str_is_numeric ("sdwr%^7[u}"));
	printf("test empty line: %d\n", ft_str_is_numeric (""));

	return(0);

}
*/
