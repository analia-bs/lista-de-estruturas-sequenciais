#include <stdio.h>
#include <stdlib.h>
//11) Faça um algoritmo que receba o salário de um funcionário, calcule e imprima o valor do imposto de renda a ser pago, sabendo que o imposto equivale a 5% do salário.
int main()
{
   float salario, imposto;//declarar as variaveis

   printf("Digite o salario do funcionario\n");
   scanf("%f", &salario);//ler e guardar na variavel salario

   imposto = salario*0.05;

    printf("O valor pago ao imposto de renda e:%f", imposto);

    return 0;
}
