#include <stdio.h>
#include <stdlib.h>
//1) Fa�a um algoritmo que receba dois n�meros inteiros e imprima a soma desses dois n�meros.
int main()
{

    int inteiro1, inteiro2, soma; //declarar as vari�veis

    printf("Digite o primeiro inteiro\n");
    scanf("%d", &inteiro1); //ler e guardar na vari�vel inteiro1

    printf("Digite o segundo inteiro\n");
    scanf("%d", &inteiro2); //ler e guardar na vari�vel inteiro2

    soma = inteiro1 + inteiro2;//somar os dois n�meros

    printf("A soma e %d\n", soma);

    return 0;

}
