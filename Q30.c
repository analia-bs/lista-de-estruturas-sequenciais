#include <stdio.h>
#include <stdlib.h>
/*30) O custo ao consumidor de um carro novo é a soma do custo de fábrica com a porcentagem do
distribuidor e dos impostos (aplicados, primeiro os impostos sobre o custo de fábrica, e depois a
percentagem do distribuidor sobre o resultado). Supondo que a percentagem do distribuidor seja de 28%
e os impostos 45%. Escrever um algoritmo que leia o custo de fábrica de um carro e informe o custo ao
consumidor do mesmo. */
int main()
{
    float custo_fabrica, custo_impost, custo_final;

    printf("Digite o custo de fabrica do carro:\n");
    scanf("%f", &custo_fabrica);

    custo_impost = custo_fabrica+(custo_fabrica*0.45);

    custo_final = custo_impost+(custo_impost*0.28);

    printf("O custo final ao consumidor e:R$ %f\n", custo_final);

    return 0;
}
