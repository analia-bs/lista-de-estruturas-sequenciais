#include <stdio.h>
#include <stdlib.h>
//13) Sabe-se que o kilowatt de energia custa um quinto do salário mínimo. Faça um algoritmo que receba o valor do salário mínimo e a quantidade de quilowatts gasta por uma residência. Calcule e
//imprima:
//• o valor, em reais, de cada kilowatt;
//• o valor, em reais, a ser pago por essa residência;
//• o novo valor a ser pago por essa residência, a partir de um desconto de 15%.

int main()
{
    float valor_kilowatt, consumo, salario, conta, nova_conta; // declarar as variaveis

    printf("Digite o valor do salario minimo\n:");
    scanf("%f", &salario);//ler e guardar na variavel salario

    printf("\nDigite o valor de kilowatt consumido\n: ");
    scanf("%f", &consumo);//ler e guardar na variavel consumo

    valor_kilowatt = salario / 5; //kilowatt de energia custa um quinto do salário mínimo
    conta = valor_kilowatt * consumo; //valor, em reais, a ser pago por essa residência
    nova_conta = conta * 0.75; // calculo da conta com desconto

    printf("\nO valor, em reais, de cada kilowatt: R$%f", valor_kilowatt);
    printf("\nO valor, em reais, a ser pago por essa residencia: R$%f", conta);
    printf("\nO novo valor a ser pago por essa residência, a partir de um desconto de 15%: R$%f", nova_conta);

    return 0;
}
