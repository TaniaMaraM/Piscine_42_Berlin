/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmarcos <tmarcos@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 17:59:27 by tmarcos           #+#    #+#             */
/*   Updated: 2024/09/02 10:04:24 by tmarcos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb(void)
{
	int	d;
	int	e;
	int	f;

	d = '0';
	while (d <= '7')
	{
		e = d + 1;
		while (e <= '8')
		{
			f = e + 1;
			while (f <= '9')
			{
				write(1, &d, 1);
				write(1, &e, 1);
				write(1, &f, 1);
				if (d != '7' || e != '8' || f != '9')
					write(1, ", ", 2);
				f++;
			}
			e++;
		}
		d++;
	}
}
