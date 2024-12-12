/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
		/*                                                    +:+ +:+         +:+     */
/*   By: tmarcos <tmarcos@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/31 12:21:02 by tmarcos           #+#    #+#             */
/*   Updated: 2024/08/31 16:03:03 by aschulz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	print_line(int x, char first, char middle, char last)
{
	int	column;

	column = 1;
	if (x > 0)
	{
		ft_putchar(first); 
		while (column < x - 1)
		{
			ft_putchar(middle);
			column++;
		}
		if (x > 1)
			ft_putchar(last);
			ft_putchar('\n');
	}
}

void	rush(int x, int y)
{
	int	line;

	line = 1;
	if (x > 0 && y > 0)
	{
		print_line(x, '/', '*', '\\');
		while (line < y -1)
		{
			print_line(x, '*', ' ', '*');
			line++;
		}
		if (y > 1)
			print_line(x, '\\', '*', '/');
	}
}
