/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmarcos <tmarcos@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 22:36:53 by tmarcos           #+#    #+#             */
/*   Updated: 2024/09/16 22:48:55 by tmarcos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_find_next_prime(int nb)
{
    while(ft_is_prime(nb) == 0)
    {
        nb++;
    }
    return(nb);
}
int ft_is_prime(int nb)
{
    {
    int i;

    i = 2;
    if (nb == 0 || nb == 1)
    return(0);
    while (i < nb)
    {
        if (nb % i == 0)
        return(0);
        i++;
    }
    return(1);
}
}

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
    printf("%d\n", ft_find_next_prime(atoi(argv[1])));
}
