#include <stdio.h>
#include <stdlib.h>
//12) Fa�a um algoritmo que receba o sal�rio de um funcion�rio, calcule e imprima o novo sal�rio sabendo-se que este sofreu um aumento de 25%.

int main()
{
    float salario, novo_salario;//declarar as variaveis

    printf("Digite o salario do funcionario\n");
    scanf("%f", &salario);//ler e guardar na variavel salario

    novo_salario = salario*1.25;

    printf("O novo salario do funcionario e:%f", novo_salario);
    return 0;
}
