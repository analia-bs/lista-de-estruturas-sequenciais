#include <stdio.h>
#include <stdlib.h>
//8) Fa�a um algoritmo que receba o valor do sal�rio de um funcion�rio e o valor do sal�rio m�nimo. Calcule e imprima quantos sal�rios m�nimos ganha esse funcion�rio.


int main()
{
    float salario1, salario2, result; //declarar as vari�veis

    printf("Digite o salario do funcionario\n");
    scanf("%f", &salario1); //ler e guardar na vari�vel num1

    printf("Digite o salario minimo\n");
    scanf("%f", &salario2); //ler e guardar na vari�vel num2

    result = salario1/salario2;

    printf("O funcionario recebe %f salarios minimos", result);
    return 0;
}
