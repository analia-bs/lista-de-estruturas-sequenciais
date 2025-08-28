#include <stdio.h>
#include <stdlib.h>
/*32) Faça um algoritmo que receba o ano de nascimento de uma pessoa e o ano atual, calcule e mostre:
• A idade dessa pessoa;
•Quantos anos ela terá em 2028. */
int main()
{
    int nascimento, atual, idade_atual, idade_2028;

    printf("Digite seu ano de nascimento:\n");
    scanf("%d", &nascimento);

    printf("Digite o ano atual:\n");
    scanf("%d", &atual);

    idade_atual = atual - nascimento; // Calculando a idade ano atual menos o ano de nascimento
    idade_2028 = 2028 - nascimento; // Calculando a idade em 2028 é 2028 menos o ano de nascimento

    printf("A sua idade e: %d anos\n", idade_atual);
    printf("Em 2028, voce tera: %d anos\n", idade_2028);

    return 0;
}
