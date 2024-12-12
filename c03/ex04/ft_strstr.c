/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmarcos <tmarcos@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 12:41:54 by tmarcos           #+#    #+#             */
/*   Updated: 2024/09/11 14:49:25 by tmarcos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	char	*find_it;
	char	*start;

	if (*to_find == '\0')
		return (str);
	while (*str)
	{
		start = str;
		find_it = to_find;
		while (*str && *find_it && *str == *find_it)
		{
			str ++;
			find_it ++;
		}
		if (!*find_it)
			return (start);
		str = start + 1;
	}
	return (0);
}
/*
#include <stdio.h>

char *ft_strstr(char *str, char *to_find);

int main(void)
{
	char str[] = "Hi, there";
	char to_find[] = "there";

	char *result;

	result = ft_strstr(str, to_find);
	
	if (result != 0)
	printf("substring: %s\n", result); //should show there
	else
	printf("substring not found so is ZERO\n"); 
	return (0);
}
*/
