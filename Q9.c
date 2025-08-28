#include <stdio.h>
#include <math.h>
//9) Faça um programa que receba um número inteiro, calcule e imprima: • a raiz quadrada desse número; • esse número elevado ao quadrado.
int main()
{
   float num1, result, result2; //declarar a variável

    printf("Digite o primeiro numero\n");
    scanf("%f", &num1); //ler e guardar na variável num1

    result = pow(num1,0.5);

    printf("A raiz quadrada de %f e %f", num1, result);
    printf("\nO numero %f elevado ao quadrado e %f:", num1, num1*num1);

    return 0;
}
