/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmarcos <tmarcos@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 19:46:55 by tmarcos           #+#    #+#             */
/*   Updated: 2024/09/16 20:14:37 by tmarcos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_iterative_power(int nb, int power)
{
    int i;
    int result;

    if (power < 0)
        return(0);
    if (power == 0 && nb == 0)
        return(1);
    result = 1;
    i = 1;
    while( i <= power)
    {
        nb *= nb;
        result = result * nb;
        i++;
    }
    return(result);
}
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
    printf("%d\n", ft_iterative_power(atoi(argv [1]), atoi(argv[2])))
    //return(0);
}