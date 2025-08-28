#include <stdio.h>
#include <stdlib.h>
//2) Faça um algoritmo que receba dois números reais, calcule e imprima a subtração do primeiro número pelo segundo.
int main()
{

    int inteiro1, inteiro2, subtracao; //declarar as variáveis

    printf("Digite o primeiro real\n");
    scanf("%d", &inteiro1); //ler e guardar na variável inteiro1

    printf("Digite o segundo real\n");
    scanf("%d", &inteiro2); //ler e guardar na variável inteiro2

    subtracao= inteiro1 - inteiro2;//substrair os dois números

    printf("A subtraçao e %d\n", subtracao);

    return 0;

}
