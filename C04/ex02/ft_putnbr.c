/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmarcos <tmarcos@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/15 15:51:02 by tmarcos           #+#    #+#             */
/*   Updated: 2024/09/16 13:43:11 by tmarcos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb < 0)
	{
		ft_putchar('-');
		if (nb == -2147483648)
		{
			ft_putchar('2');
			nb = 147483648;
		}
		else
		{
			nb = -nb;
		}
	}
	if (nb >= 10)
	{
		ft_putnbr (nb / 10);
	}
	ft_putchar(nb % 10 + '0');
}
/*
int main(void)
{
	ft_putnbr(42);
	ft_putchar('\n');
	ft_putnbr(-42);
	ft_putchar('\n');
	ft_putnbr(147483648);
	ft_putchar('\n');

	return(0);
}
*/
