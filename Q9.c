#include <stdio.h>
#include <math.h>
//9) Fa�a um programa que receba um n�mero inteiro, calcule e imprima: � a raiz quadrada desse n�mero; � esse n�mero elevado ao quadrado.
int main()
{
   float num1, result, result2; //declarar a vari�vel

    printf("Digite o primeiro numero\n");
    scanf("%f", &num1); //ler e guardar na vari�vel num1

    result = pow(num1,0.5);

    printf("A raiz quadrada de %f e %f", num1, result);
    printf("\nO numero %f elevado ao quadrado e %f:", num1, num1*num1);

    return 0;
}
