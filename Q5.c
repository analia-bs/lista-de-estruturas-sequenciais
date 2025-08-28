#include <stdio.h>
#include <stdlib.h>
// 5) Faça um algoritmo que receba duas notas de um aluno e seus respectivos pesos, calcule e imprima a média ponderada dessas notas
int main()
{
     float nota1, nota2, peso1, peso2, media; //declarar as variáveis

    printf("Digite primeira nota\n");
    scanf("%f", &nota1); //ler e guardar na variável nota1

    printf("Digite a segunda nota\n");
    scanf("%f", &nota2); //ler e guardar na variável nota2

    printf("Digite o peso da nota 1\n");
    scanf("%f", &peso1); //ler e guardar na variável peso1

    printf("Digite o peso da nota 2\n");
    scanf("%f", &peso2); //ler e guardar na variável peso2

    media= (nota1*peso1+nota2*peso2)/(peso1+peso2);

    printf("A media ponderada e %f\n", media);






    return 0;
}
