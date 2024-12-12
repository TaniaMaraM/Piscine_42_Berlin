#include <stdio.h>

void ft_ultimate_ft(int *********nbr);

int main(void)
{
    int a;            // Variável do tipo int
    int *p1;          // Ponteiro para int
    int **p2;         // Ponteiro para ponteiro de int
    int ***p3;        // Ponteiro para ponteiro de ponteiro de int
    int ****p4;       // E assim por diante...
    int *****p5;
    int ******p6;
    int *******p7;
    int ********p8;
    int *********p9;

    a = 0;            // Inicializa a variável 'a' com 0
    p1 = &a;          // p1 aponta para 'a'
    p2 = &p1;         // p2 aponta para p1
    p3 = &p2;         // p3 aponta para p2
    p4 = &p3;         // p4 aponta para p3
    p5 = &p4;         // p5 aponta para p4
    p6 = &p5;         // p6 aponta para p5
    p7 = &p6;         // p7 aponta para p6
    p8 = &p7;         // p8 aponta para p7
    p9 = &p8;         // p9 aponta para p8

    ft_ultimate_ft(p9); // Chama a função que altera o valor de 'a' para 42

    printf("Valor de a: %d\n", a); // Verifica se o valor de 'a' foi alterado para 42

    return 0;
}  
