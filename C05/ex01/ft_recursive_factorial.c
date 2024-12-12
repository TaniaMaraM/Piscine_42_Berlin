/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmarcos <tmarcos@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 19:16:29 by tmarcos           #+#    #+#             */
/*   Updated: 2024/09/16 19:44:00 by tmarcos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_recursive_factorial(int nb)
{
    if (nb < 0)
        return (0);
    if (nb ==  1 || nb == 0)
        return (1);
        return (nb * ft_recursive_factorial(nb - 1));
}
