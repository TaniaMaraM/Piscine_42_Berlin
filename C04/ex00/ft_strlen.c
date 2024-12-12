/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmarcos <tmarcos@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 19:38:43 by tmarcos           #+#    #+#             */
/*   Updated: 2024/09/16 13:28:53 by tmarcos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	a;

	a = 0;
	while (str[a] != '\0')
	{
		a++;
	}
	return (a);
}
/*
#include <stdio.h>

int	ft_strlen(char *str);

int	main()
{
	char *c = "Hello";
	printf("%d\n", ft_strlen(c));
    return (0);
}
*/
