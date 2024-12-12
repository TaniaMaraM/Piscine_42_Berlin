/*
Write a function that displays a string on the standard output.

The pointer passed to the function contains the address of the string's first
character.

Your function must be declared as follows:

void	ft_putstr(char *str);
*/

#include <unistd.h>

void	ft_putstr(char *str)
{
	int i = 0;

	while (str[i])  // Percorre a string até encontrar o caractere nulo '\0'
	{
		write(1, &str[i], 1);  // Escreve um caractere por vez na saída padrão
		i++;
	}
}
