/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmarcos <tmarcos@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 18:12:42 by tmarcos           #+#    #+#             */
/*   Updated: 2024/09/04 09:37:46 by tmarcos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int*a, int*b)
{
	int	t;

	t = *a;
	*a = *b;
	*b = t;
}