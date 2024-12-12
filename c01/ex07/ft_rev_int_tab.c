/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmarcos <tmarcos@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 20:03:52 by tmarcos           #+#    #+#             */
/*   Updated: 2024/09/04 09:58:06 by tmarcos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int*tab, int size)
{
	int	begin;
	int	end;
	int	temp;

	begin = 0;
	end = size - 1;
	while (begin < end)
	{
		temp = tab[begin];
		tab[begin] = tab[end];
		tab[end] = temp;
		begin++;
		end--;
	}
}
