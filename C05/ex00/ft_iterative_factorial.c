/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmarcos <tmarcos@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 18:51:08 by tmarcos           #+#    #+#             */
/*   Updated: 2024/09/16 19:15:01 by tmarcos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_iterative_factorial(int nb)
{
    int i;
    int result;
    
    if (nb < 0)
        return(0);
    i = 1;
    result = 1;
    while (i <= nb)
    {
        result = result * i;
        i++;
    }
    return(result);
}
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
    printf(%d\n, ft_iterative_factorial(atoi(argv[1])));
}