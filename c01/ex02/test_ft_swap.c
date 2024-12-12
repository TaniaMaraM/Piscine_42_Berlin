#include <stdio.h> // Para usar printf

void ft_swap(int *a, int *b);

int main(void)
{
    int x = 5;  // Declara uma variável 'x'
    int y = 10; // Declara uma variável 'y'

    // Exibe os valores antes da troca
    printf("Antes da troca: x = %d, y = %d\n", x, y);

    // Chama a função ft_swap passando os endereços de 'x' e 'y'
    ft_swap(&x, &y);

    // Exibe os valores após a troca
    printf("Após a troca: x = %d, y = %d\n", x, y);
}
