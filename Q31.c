#include <stdio.h>
#include <stdlib.h>
/*31) Fa�a um algoritmo que apresente, para um sal�rio informado pelo usu�rio, um novo sal�rio com
aumento de 37%. */
int main()
{
    float salario, novo_salario;//declarar as variaveis

    printf("Digite o salario\n");
    scanf("%f", &salario);//ler e guardar na variavel salario

    novo_salario = salario*1.37;

    printf("O novo salario e:%f", novo_salario);

    return 0;
}
