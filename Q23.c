#include <stdio.h>
#include <stdlib.h>
//23) No momento, por conta da administra��o p�blica p�ssima e da corrup��o em todos os setores
//estatais, os comerciantes est�o procurando aumentar suas vendas oferecendo desconto. Fa�a um
//algoritmo que possa receber um valor de um produto e que escreva o novo valor tendo em vista que o
//desconto foi de 9%.
int main()
{
    float valor_prod, novo_valor;

    printf("Valor do produto\n");
    scanf("%f", &valor_prod);

    novo_valor= valor_prod*0.91;

    printf("O novo valor com o desconto e de %f", novo_valor);


    return 0;
}
