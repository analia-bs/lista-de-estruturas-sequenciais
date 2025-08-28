#include <stdio.h>
#include <math.h>

//7) Faça um algoritmo que receba dois números, calcule e imprima um elevado ao outro.
int main()
{

    float num1, num2, result; //declarar as variáveis

    printf("Digite o primeiro numero\n");
    scanf("%f", &num1); //ler e guardar na variável num1

    printf("Digite o segundo numero\n");
    scanf("%f", &num2); //ler e guardar na variável num2

    result = pow(num1,num2);

    printf("Numeros elevados %f\n", result);






    return 0;
}
