#include <stdio.h>
#include <stdlib.h>
//3)Faça um algoritmo que receba dois números inteiros, calcule e imprima a divisão do primeiro número pelo segundo.
int main()
{
    int inteiro1, inteiro2, divisao; //declarar as variáveis

    printf("Digite o primeiro inteiro\n");
    scanf("%d", &inteiro1); //ler e guardar na variável inteiro1

    printf("Digite o segundo inteiro\n");
    scanf("%d", &inteiro2); //ler e guardar na variável inteiro2

    divisao = inteiro1 / inteiro2;//divisao dos dois números

    printf("A divisao e %d\n", divisao);

    return 0;
}

