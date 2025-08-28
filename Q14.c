#include <stdio.h>
#include <stdlib.h>
//14) Faça um algoritmo que receba o peso de uma pessoa, um valor inteiro, calcule e imprima:
//• o peso dessa pessoa em gramas;
//• se essa pessoa engordar 5%, qual será seu novo peso em gramas.

int main()
{
    float peso, novo_peso;

    printf("Digite seu peso (kg):");
    scanf("%f", &peso);

    novo_peso = peso * 1.05;

    printf("\nSeu peso e: : %fg", peso*1000);
    printf("\nSeu passo se engordar 5%: %fg", novo_peso *1000);
    return 0;
}
