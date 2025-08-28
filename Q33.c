#include <stdio.h>
#include <stdlib.h>
/*33) Cada degrau de uma escada tem uma altura X. Fa�a um algoritmo que receba essa altura e a altura
que o usu�rio deseja alcan�ar subindo a escada. Calcule e mostre quantos degraus o usu�rio dever�
subir para atingir seu objetivo. */
int main()
{
    float altura_atual, alt_desejada;
    int num_degraus; // Colocar int pois n�o existe metade de um degra

    printf("Digite a altura de cada degrau em metros:\n");
    scanf("%f", &altura_atual);

    printf("Digite a altura que deseja alcancar em metros:\n");
    scanf("%f", &alt_desejada);

    num_degraus = alt_desejada / altura_atual;

    printf("Voce precisara subir mais de %d degraus para atingir seu objetivo.\n", num_degraus);

    return 0;
}
