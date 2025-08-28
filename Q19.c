#include <stdio.h>
#include <stdlib.h>
#include <math.h>
//19) Crie um programa que receba valores quaisquer e mostre a média entre eles, o somatório entre eles e o resto da divisão do somatório por cada um dos valores.

int main()
{
    float valor1, valor2, valor3, soma, media;

    printf("Digite o primeiro valor:\n");
    scanf("%f", &valor1);

    printf("Digite o segundo valor:\n");
    scanf("%f", &valor2);

    printf("Digite o terceiro valor:\n");
    scanf("%f", &valor3);

    soma = valor1+valor2+valor3;

    media = soma/3;

    printf("O somatorio entre os valores:%f\n", soma);

    printf("A media entre esses valores:%f\n", media);

    printf("Resto de %f por %f: %f\n", soma, valor1, fmod(soma, valor1));
    printf("Resto de %f por %f: %f\n", soma, valor2, fmod(soma, valor2));
    printf("Resto de %f por %f: %f\n", soma, valor3, fmod(soma, valor3));
    return 0;
}
