/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmarcos <tmarcos@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 19:16:38 by tmarcos           #+#    #+#             */
/*   Updated: 2024/09/16 13:41:03 by tmarcos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int	a;

	a = 0;
	while (str[a] != '\0')
	{
		write(1, &str[a], 1);
		str++;
	}
}
/*
#include <stdio.h>

void ft_putstr(char *str);

int main(void)
{
    char my_str[] = "Hello, 42!\n";
    ft_putstr(my_str);
    return 0;
}
*/
