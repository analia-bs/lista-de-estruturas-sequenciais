#include <stdio.h>
#include <math.h>

//7) Fa�a um algoritmo que receba dois n�meros, calcule e imprima um elevado ao outro.
int main()
{

    float num1, num2, result; //declarar as vari�veis

    printf("Digite o primeiro numero\n");
    scanf("%f", &num1); //ler e guardar na vari�vel num1

    printf("Digite o segundo numero\n");
    scanf("%f", &num2); //ler e guardar na vari�vel num2

    result = pow(num1,num2);

    printf("Numeros elevados %f\n", result);






    return 0;
}
