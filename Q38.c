#include <stdio.h>
#include <stdlib.h>
//38) Considerando uma eleição de apenas 2 candidatos, elabore um algoritmo que leia do teclado o
//número total de eleitores, o número de votos do primeiro candidato e o número de votos do segundo
//candidato. Em seguida, o algoritmo deverá apresentar o percentual de votos de cada um dos candidatos
//e o percentual de votos nulos.
int main()
{
    float total, votos_A, votos_B, perc_A, perc_B, nulos, perc_nulo;

    printf("Digite o numero total de votos:");
    scanf("%f", &total);

    printf("Digite o numero de votos para o candidato A:");
    scanf("%f", &votos_A);

    printf("Digite o numero de votos para o candidato B:");
    scanf("%f", &votos_B);

    nulos = total-votos_A-votos_B;

    perc_A = votos_A*100/total;

    perc_B = votos_B*100/total;

    perc_nulo = 100-perc_A-perc_B;

    printf("\n O candidato A recebeu %f porcentos dos votos.", perc_A);
    printf("\n O candidato B recebeu %f porcentos dos votos.", perc_B);
    printf("\n %f porcentos dos votos foram nulos.", perc_nulo);


   return 0;

    return 0;
}
