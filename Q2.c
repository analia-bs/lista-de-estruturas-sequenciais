#include <stdio.h>
#include <stdlib.h>
//2) Fa�a um algoritmo que receba dois n�meros reais, calcule e imprima a subtra��o do primeiro n�mero pelo segundo.
int main()
{

    int inteiro1, inteiro2, subtracao; //declarar as vari�veis

    printf("Digite o primeiro real\n");
    scanf("%d", &inteiro1); //ler e guardar na vari�vel inteiro1

    printf("Digite o segundo real\n");
    scanf("%d", &inteiro2); //ler e guardar na vari�vel inteiro2

    subtracao= inteiro1 - inteiro2;//substrair os dois n�meros

    printf("A subtra�ao e %d\n", subtracao);

    return 0;

}
