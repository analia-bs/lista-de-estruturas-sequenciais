#include <stdio.h>
#include <stdlib.h>
//3)Fa�a um algoritmo que receba dois n�meros inteiros, calcule e imprima a divis�o do primeiro n�mero pelo segundo.
int main()
{
    int inteiro1, inteiro2, divisao; //declarar as vari�veis

    printf("Digite o primeiro inteiro\n");
    scanf("%d", &inteiro1); //ler e guardar na vari�vel inteiro1

    printf("Digite o segundo inteiro\n");
    scanf("%d", &inteiro2); //ler e guardar na vari�vel inteiro2

    divisao = inteiro1 / inteiro2;//divisao dos dois n�meros

    printf("A divisao e %d\n", divisao);

    return 0;
}

