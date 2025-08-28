#include <stdio.h>
#include <stdlib.h>
//15) Faça um algoritmo que receba o ano de nascimento de uma pessoa e o ano atual. Calcule e
//imprima:
//• a idade dessa pessoa;
//• essa idade convertida em semanas.
int main()
{
    int nascimento, ano_atual, idade;
    float semanas;

    printf("Digite o seu ano de nascimento\n");
    scanf("%d", &nascimento);

    printf("\nDigite o ano atual\n");
    scanf("%d", &ano_atual);

    idade = ano_atual-nascimento;
    semanas = idade*52.143;

    printf("\nA sua idade e:%d", idade);
    printf("\nSua idade em semanas e:%f", semanas);

    return 0;
}
