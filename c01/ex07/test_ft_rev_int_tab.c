#include <stdio.h>

void ft_rev_int_tab(int *tab, int size);

int main(void)
{
    int array[] = {1, 2, 3, 4, 5};
    int size = 5;
    
    ft_rev_int_tab(array, size);

    for (int i = 0; i < size; i++)
    {
        printf("%d ", array[i]);
    }
    printf("\n");

    return 0;
}
