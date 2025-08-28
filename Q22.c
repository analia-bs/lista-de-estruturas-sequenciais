#include <stdio.h>
#include <stdlib.h>
//22)Escreva um algoritmo para trocar os valores de três variáveis A, B e C de modo que A fique com o
//valor de B, B fique com o valor de C e C fique com o valor de A.

int main()
{
    float a, b, c;

    printf("Determine o valor de a\n");
    scanf("%f", &a);

    printf("Determine o valor de b\n");
    scanf("%f", &b);

    printf("Determine o valor de c\n");
    scanf("%f", &c);

    printf("O valor de A e %f", b);
    printf("O valor de B e %f", c);
    printf("O valor de C e %f", a);

    return 0;
}
