#include <stdio.h>
#include <stdlib.h>
//8) Faça um algoritmo que receba o valor do salário de um funcionário e o valor do salário mínimo. Calcule e imprima quantos salários mínimos ganha esse funcionário.


int main()
{
    float salario1, salario2, result; //declarar as variáveis

    printf("Digite o salario do funcionario\n");
    scanf("%f", &salario1); //ler e guardar na variável num1

    printf("Digite o salario minimo\n");
    scanf("%f", &salario2); //ler e guardar na variável num2

    result = salario1/salario2;

    printf("O funcionario recebe %f salarios minimos", result);
    return 0;
}
