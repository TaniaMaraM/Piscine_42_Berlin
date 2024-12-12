#include <unistd.h>

void ft_print_numbers();

int main(void)
{
	ft_print_numbers();
	write(1, "\n", 1);
	return(0);
}
