#include <stdio.h>

void ft_div_mod(int a, int b, int *div, int *mod);

int		main(void)
{
	int a = 10; 
	int b = 3;

	printf("the result of divinding %d by %d is: %d\n", a, b, a / b);
	return 0;
}