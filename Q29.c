
#include <stdio.h>
#include <stdlib.h>
/*29) Fa�a um algoritmo que receba o pre�o de custo de um produto e mostre o valor de venda. Sabe-se
que o pre�o de custo receber� um acr�scimo de acordo com um percentual informado pelo usu�rio. */
int main()
{
    float preco_prod, percentual, valor_venda, acrescimo;

    printf("Digite o preco do produto\n");
    scanf("%f", &preco_prod);

    printf("Determine o percentual de acrescimo em porcentagem\n");
    scanf("%f", &percentual);

    acrescimo=preco_prod*(percentual/100);
    valor_venda= acrescimo+preco_prod;

    printf("O valor de venda e R$%f", valor_venda);

    return 0;
}
