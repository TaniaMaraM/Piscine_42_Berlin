#include <stdio.h>

// Prototipo da funcao de ordenacao
void ft_sort_int_tab(int *tab, int size);

int main(void)
{
    int tab[] = {42, 13, 8, 24, 56, 5, 10}; // Array de inteiros desordenado
    int size = 7; // Tamanho do array

    // Exibindo o array antes da ordenacao
    printf("Array antes da ordenacao:\n");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", tab[i]);
    }
    printf("\n");

    // Chamando a funcao de ordenacao
    ft_sort_int_tab(tab, size);

    // Exibindo o array depois da ordenacao
    printf("Array depois da ordenacao:\n");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", tab[i]);
    }
    printf("\n");

    return 0;
}
