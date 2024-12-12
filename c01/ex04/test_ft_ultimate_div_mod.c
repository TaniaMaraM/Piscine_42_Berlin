#include <stdio.h>

void ft_ultimate_div_mod(int *a, int *b);

int main(void)
{
    int a = 10, b = 3;

    ft_ultimate_div_mod(&a, &b);

    printf("Quociente: %d\n", a);
    printf("Rest: %d\n", b);

    return 0;
}
