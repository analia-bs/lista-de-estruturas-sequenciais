#include <stdio.h>
#include <stdlib.h>
//37) Elabore um algoritmo para efetuar o c�lculo da quantidade de combust�vel gasto em uma viagem,
//utilizando-se um autom�vel que faz 12 Kms por litro. Para obter o c�lculo, o usu�rio dever� fornecer o
//tempo gasto e a velocidade m�dia durante a viagem. Desta forma, ser� poss�vel obter a dist�ncia
//percorrida (dist�ncia = tempo * velocidade).
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
