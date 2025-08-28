#include <stdio.h>
#include <stdlib.h>
//17) Faça um programa que receba a quantidade e o valor de três produtos, no seguinte formato:
//quantidade1 valor1 quantidade2 valor2 quantidade3 valor3. O programa deve calcular esses valores
//seguindo a fórmula total =  quantidade1* valor1 + quantidade2 * valor2 + quantidade3 * valor3. O valor
//total  deve ser apresentado no final da execução do programa.

int main()
{
   float quantidade1, valor1, quantidade2, valor2, quantidade3, valor3, total;

    printf("Digite o valor do produto\n");
    scanf("%f", &valor1 );

    printf("Digite a quantidade deste produto\n");
    scanf("%f", &quantidade1);

    printf("Digite o valor de mais um produto\n");
    scanf("%f", &valor2 );

    printf("Digite a quantidade deste produto\n");
    scanf("%f", &quantidade2);

    printf("Digite o valor de mais um produto\n");
    scanf("%f", &valor3);

    printf("Digite a quantidade deste produto\n");
    scanf("%f", &quantidade3);

    total = quantidade1* valor1 + quantidade2 * valor2 + quantidade3 * valor3;

    printf("O valor total e de R$%f", total);

    return 0;
}
