#include <stdio.h>
#include <stdlib.h>
// 5) Fa�a um algoritmo que receba duas notas de um aluno e seus respectivos pesos, calcule e imprima a m�dia ponderada dessas notas
int main()
{
     float nota1, nota2, peso1, peso2, media; //declarar as vari�veis

    printf("Digite primeira nota\n");
    scanf("%f", &nota1); //ler e guardar na vari�vel nota1

    printf("Digite a segunda nota\n");
    scanf("%f", &nota2); //ler e guardar na vari�vel nota2

    printf("Digite o peso da nota 1\n");
    scanf("%f", &peso1); //ler e guardar na vari�vel peso1

    printf("Digite o peso da nota 2\n");
    scanf("%f", &peso2); //ler e guardar na vari�vel peso2

    media= (nota1*peso1+nota2*peso2)/(peso1+peso2);

    printf("A media ponderada e %f\n", media);






    return 0;
}
