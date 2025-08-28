#include <stdio.h>
#include <stdlib.h>
//20) Uma determinada pessoa que trabalha com construção de piscinas precisa de um programa que
//calcule o valor das construções solicitadas pelos clientes, sabendo-se que os clientes sempre fornecem
//o comprimento, a largura e a profundidade da piscina a ser construída. Leve em consideração que o
//valor da construção é cobrado por m3 de água que a piscina conterá e o preço é de R$ 45.00 por m3.

int main()
{
    float largura, comprimento, profundidade, volume, valor;

    printf("Digite a largura da piscina\n");
    scanf("%f", &largura);

    printf("Digite o comprimento da piscina\n");
    scanf("%f", &comprimento);

    printf("Digite o profundidade\n");
    scanf("%f", &profundidade);

    valor = largura*comprimento*profundidade*45;

    printf("O valor da obra da piscina e R$%f", valor);

    return 0;
}
