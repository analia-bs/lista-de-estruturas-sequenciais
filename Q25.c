#include <stdio.h>
#include <stdlib.h>
/*25) Faça um algoritmo que após a entrada de uma determinada distância entre dois pontos (em KM) e
uma determinada velocidade (km/h), diga qual o tempo médio que levará para chegada a esse local e
qual a velocidade em metros/segundo.*/
int main()
{

    float distancia, velocidade, tempo_med, veloc_ms;

    printf("Digite a distancia em km entre dois pontos\n");
    scanf("%f", &distancia);

    printf("Determine a velocidade em km/h\n");
    scanf("%f", &velocidade);

    tempo_med= distancia/velocidade;
    veloc_ms= velocidade/3.6;

    printf("o tempo medio de chegada neste local e %fh\n", tempo_med);
    printf("A velocidade em metros/segundo e %f", veloc_ms);

    return 0;
}
