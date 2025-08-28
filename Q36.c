#include <stdio.h>
#include <stdlib.h>
/*36) Fa�a um algoritmo que receba o custo de um espet�culo teatral e o pre�o do convite esse
espet�culo. Esse programa deve calcular e mostrar:
�A quantidade de convites que devem ser vendidos para que pelo menos o custo do espet�culo seja
alcan�ado.
�A quantidade de convites que devem ser vendidos para que se tenha um lucro de 23%. */
int main()
{
    float custo, ingresso;
    int quant_max, quant_min;

    printf("Qual o custo do espetaculo?\n");
    scanf("%f", &custo); // ler e armazenar o custo do espet�culo

    printf("Qual o preco do ingresso?\n");
    scanf("%f", &ingresso); // ler e armazenar o valor do ingresso

    quant_min = custo/ingresso;

    quant_max = (1.23*custo)/ingresso;

    printf("\n Quantidade de convites que devem ser vendidos para que pelo menos o custo do espet�culo seja alcan�ado e de %d convites.", quant_min); // imprimindo resultado
    printf("\n Quantidade de convites que devem ser vendidos para que o lucro chegue em 23 porcentos e mais de %d convites.", quant_max); // imprimindo resultado
    return 0;
}
