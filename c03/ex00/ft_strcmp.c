/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmarcos <tmarcos@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 15:46:48 by tmarcos           #+#    #+#             */
/*   Updated: 2024/09/10 17:14:48 by tmarcos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}
	return (s1[i] - s2[i]);
}
/*
#include <stdio.h>

int ft_strcmp(char *s1, char *s2);

int main()
{
	printf("%d\n", ft_strcmp("brasil", "brasil")); // should return zero
	printf("%d\n", ft_strcmp("brasil", "floripa")); //should return negative
	printf("%d\n", ft_strcmp("floripa", "brasil")); //should return positive
	return(0);
}
*/
