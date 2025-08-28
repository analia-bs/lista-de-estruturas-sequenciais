#include <stdio.h>
#include <stdlib.h>
/*28) A Loja Mamão com Açúcar está vendendo seus produtos em 5 (cinco) prestações sem juros. Faça
um algoritmo que receba um valor de uma compra e mostre o valor das prestações*/
int main()
{
    float compra, prest;

    printf("Valor da compra\n");
    scanf("%f", &compra);

    prest = compra/5;

    printf("O valor das prestacoes e:R$%f", prest);

    return 0;
}
