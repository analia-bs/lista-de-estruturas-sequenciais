#include <stdio.h>
#include <stdlib.h>
//1) Faça um algoritmo que receba dois números inteiros e imprima a soma desses dois números.
int main()
{

    int inteiro1, inteiro2, soma; //declarar as variáveis

    printf("Digite o primeiro inteiro\n");
    scanf("%d", &inteiro1); //ler e guardar na variável inteiro1

    printf("Digite o segundo inteiro\n");
    scanf("%d", &inteiro2); //ler e guardar na variável inteiro2

    soma = inteiro1 + inteiro2;//somar os dois números

    printf("A soma e %d\n", soma);

    return 0;

}
