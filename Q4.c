#include <stdio.h>
#include <stdlib.h>
//4)Fa�a um algoritmo que receba tr�s notas de um aluno, calcule e imprima a m�dia aritm�tica entre essas notas.
int main()
{
       float nota1, nota2, nota3, media; //declarar as vari�veis

    printf("Digite primeira nota\n");
    scanf("%f", &nota1); //ler e guardar na vari�vel nota1

    printf("Digite a segunda nota\n");
    scanf("%f", &nota2); //ler e guardar na vari�vel nota2

    printf("Digite a terceira nota\n");
    scanf("%f", &nota3); //ler e guardar na vari�vel nota3

    media = (nota1 + nota2 + nota3)/3;

    printf("A media e %f\n", media);






    return 0;
}
