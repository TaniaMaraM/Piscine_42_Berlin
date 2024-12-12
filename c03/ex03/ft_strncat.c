/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmarcos <tmarcos@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 10:10:00 by tmarcos           #+#    #+#             */
/*   Updated: 2024/09/11 12:36:17 by tmarcos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	char			*dest_start;
	unsigned int	i;

	dest_start = dest;
	i = 0;
	while (*dest != '\0')
		dest ++;
	while (*src != '\0' && i < nb)
	{
		*dest = *src;
		dest ++;
		src ++;
		i ++;
	}
	*dest = '\0';
	return (dest_start);
}
/*
#include <stdio.h>

char    *ft_strncat(char *dest, char *src, unsigned int nb);

int main (void)
{
	char dest[20] = "Hi,";
	char src[] = "there!";

	ft_strncat(dest, src, 3);
	printf("%s\n", dest);
	return(0);
}
*/
