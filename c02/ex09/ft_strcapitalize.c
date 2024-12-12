/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmarcos <tmarcos@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 14:23:32 by tmarcos           #+#    #+#             */
/*   Updated: 2024/09/10 14:37:48 by tmarcos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_lower(char c)
{
	return (c >= 'a' && c <= 'z');
}

int	ft_is_upper(char c)
{
	return (c >= 'A' && c <= 'Z');
}

int	ft_is_separator(char c)
{
	return (c < '0' || (c > '9' && c < 'A') || (c > 'Z' && c < 'a') || c > 'z');
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	new_word;

	i = 0;
	new_word = 1;
	while (str[i] != '\0')
	{
		if (new_word && ft_is_lower(str[i]))
			str[i] -= 32;
		else if (!new_word && ft_is_upper(str[i]))
			str[i] += 32;
		if (ft_is_separator(str[i]))
			new_word = 1;
		else
			new_word = 0;
		i++;
	}
	return (str);
}
/*
#include <stdio.h>

char    *ft_strcapitalize(char *str);

int main ()
{
	char str[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
	printf("%s\n", ft_strcapitalize(str));
	return (0);	
}
*/
