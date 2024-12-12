/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmarcos <tmarcos@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 20:11:46 by tmarcos           #+#    #+#             */
/*   Updated: 2024/09/16 20:30:00 by tmarcos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_recursive_power(int nb, int power)
{
    if (power < 0)
        return(0);
    if (power == 0)
        return(1);
    return(nb *(nb * ft_recursive_power(nb, power -1)));
}

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
    printf("%d\n", ft_recursive_power(atoi(argv [1]), atoi(argv[2])));
    //return(0);
}