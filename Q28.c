#include <stdio.h>
#include <stdlib.h>
/*28) A Loja Mam�o com A��car est� vendendo seus produtos em 5 (cinco) presta��es sem juros. Fa�a
um algoritmo que receba um valor de uma compra e mostre o valor das presta��es*/
int main()
{
    float compra, prest;

    printf("Valor da compra\n");
    scanf("%f", &compra);

    prest = compra/5;

    printf("O valor das prestacoes e:R$%f", prest);

    return 0;
}
