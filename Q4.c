#include <stdio.h>
#include <stdlib.h>
//4)Faça um algoritmo que receba três notas de um aluno, calcule e imprima a média aritmética entre essas notas.
int main()
{
       float nota1, nota2, nota3, media; //declarar as variáveis

    printf("Digite primeira nota\n");
    scanf("%f", &nota1); //ler e guardar na variável nota1

    printf("Digite a segunda nota\n");
    scanf("%f", &nota2); //ler e guardar na variável nota2

    printf("Digite a terceira nota\n");
    scanf("%f", &nota3); //ler e guardar na variável nota3

    media = (nota1 + nota2 + nota3)/3;

    printf("A media e %f\n", media);






    return 0;
}
