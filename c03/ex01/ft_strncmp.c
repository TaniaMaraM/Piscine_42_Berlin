/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmarcos <tmarcos@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 17:17:26 by tmarcos           #+#    #+#             */
/*   Updated: 2024/09/12 09:32:04 by tmarcos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n)
	{
		if (s1[i] == '\0' || s2[i] == '\0')
			return (s1[i] - s2[i]);
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}
/*
#include <stdio.h>

int ft_strncmp(char *s1, char *s2, unsigned int n);

int main (void)
{
	printf("%d\n", ft_strncmp ("banana", "banana", 6)); //zero
	printf("%d\n", ft_strncmp ("apple", "apples", 6)); //negativo
	printf("%d\n", ft_strncmp ("banana", "banaba", 6)); //positivo
	return(0);
}
*/
