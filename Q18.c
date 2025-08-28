#include <stdio.h>
#include <stdlib.h>
//18) Crie um programa que receba a largura e o comprimento de um lote de terra e mostre a área total existente.
int main()
{
    float largura, comprimento, area;

    printf("Digite a largura do lote\n");
    scanf("%f", &largura);

    printf("Digite o comprimento do lote\n");
    scanf("%f", &comprimento);

    area=largura*comprimento;

    printf("A area total do lote e %f", area);
    return 0;
}
