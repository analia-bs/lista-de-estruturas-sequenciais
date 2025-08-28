#include <stdio.h>
#include <stdlib.h>
//21) Entrar via teclado com o valor de cinco produtos. Após as entradas, digitar um valor referente ao
//pagamento da somatória destes valores. Calcular e exibir o troco que deverá ser devolvido.
int main()
{
    float prod1, prod2, prod3, prod4, prod5, soma, pagamento, troco;

    printf("Digite o valor do produto\n");
    scanf("%f", &prod1 );

    printf("Digite o valor do segundo produto\n");
    scanf("%f", &prod2);

    printf("Digite o valor de mais um produto\n");
    scanf("%f", &prod3 );

    printf("Digite o  valor de mais um produto\n");
    scanf("%f", &prod4);

    printf("Digite o valor de mais um produto\n");
    scanf("%f", &prod5);

    soma= prod1+prod2+prod3+prod4+prod5;

    printf("\nO valor pago foi de R$%f\n");
    scanf("%f", &pagamento);

    troco=pagamento-soma;

    printf("O troco devolvido foi de R$%f", troco);

    return 0;
}
