/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmarcos <tmarcos@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 19:20:22 by tmarcos           #+#    #+#             */
/*   Updated: 2024/09/11 10:54:59 by tmarcos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	char	*dest_start;

	dest_start = dest;
	while (*dest != '\0')
		dest ++;
	while (*src != '\0')
	{
		*dest = *src;
		dest ++;
		src ++;
	}
	*dest = '\0';
	return (dest_start);
}
/*
#include <stdio.h>

char    *ft_strcat(char *dest, char *src);

int main (void)
{
	char dest[50] = "Hi,";
	char src[] = "42!";

	printf("before: %s\n", dest);
	ft_strcat(dest, src);
	printf("after: %s\n", dest);
	
	return (0);
}
*/
