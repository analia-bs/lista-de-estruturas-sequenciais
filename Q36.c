#include <stdio.h>
#include <stdlib.h>
/*36) Faça um algoritmo que receba o custo de um espetáculo teatral e o preço do convite esse
espetáculo. Esse programa deve calcular e mostrar:
•A quantidade de convites que devem ser vendidos para que pelo menos o custo do espetáculo seja
alcançado.
•A quantidade de convites que devem ser vendidos para que se tenha um lucro de 23%. */
int main()
{
    float custo, ingresso;
    int quant_max, quant_min;

    printf("Qual o custo do espetaculo?\n");
    scanf("%f", &custo); // ler e armazenar o custo do espetáculo

    printf("Qual o preco do ingresso?\n");
    scanf("%f", &ingresso); // ler e armazenar o valor do ingresso

    quant_min = custo/ingresso;

    quant_max = (1.23*custo)/ingresso;

    printf("\n Quantidade de convites que devem ser vendidos para que pelo menos o custo do espetáculo seja alcançado e de %d convites.", quant_min); // imprimindo resultado
    printf("\n Quantidade de convites que devem ser vendidos para que o lucro chegue em 23 porcentos e mais de %d convites.", quant_max); // imprimindo resultado
    return 0;
}
