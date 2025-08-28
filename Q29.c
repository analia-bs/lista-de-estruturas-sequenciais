
#include <stdio.h>
#include <stdlib.h>
/*29) Faça um algoritmo que receba o preço de custo de um produto e mostre o valor de venda. Sabe-se
que o preço de custo receberá um acréscimo de acordo com um percentual informado pelo usuário. */
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
