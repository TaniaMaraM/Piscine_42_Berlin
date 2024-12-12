/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmarcos <tmarcos@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 21:40:09 by tmarcos           #+#    #+#             */
/*   Updated: 2024/09/16 22:12:36 by tmarcos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_sqrt(int nb)
{
    int i;
    
    i = 1;
    if (nb > 0)
    {    while(i * i  <= nb)
        {
            if(i * i == nb)
            return (i);
            i++;
        }
    }
    return (0);
}

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
    printf("%d\n", ft_sqrt(atoi(argv[1])));
}

