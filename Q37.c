#include <stdio.h>
#include <stdlib.h>
//37) Elabore um algoritmo para efetuar o cálculo da quantidade de combustível gasto em uma viagem,
//utilizando-se um automóvel que faz 12 Kms por litro. Para obter o cálculo, o usuário deverá fornecer o
//tempo gasto e a velocidade média durante a viagem. Desta forma, será possível obter a distância
//percorrida (distância = tempo * velocidade).
int main()
{
    float tempo, velocidade, distancia;

    printf("Qual tempo gasto da viagem em horas\n");
    scanf("%f", &tempo); // ler e amarzenar tempo da viagem

    printf("Qual a velocidade media em km/h?\n");
    scanf("%f", &velocidade); // ler e amazenar a velocidade

    distancia = tempo*velocidade;

    printf("\n A distancia da viagem e de %f km.", distancia); // imprimido o resultado

    return 0;
}
