#include <stdio.h>
#include <stdlib.h>
//16) Crie um programa que receba tr�s nomes quaisquer por meio da linha de execu��o do programa, e
//os imprima na tela da seguinte maneira: o primeiro e o �ltimo nomes ser�o impressos na primeira linha
//um ap�s o outro, o outro nome (o segundo) ser� impresso na segunda linha.0
int main()
{
    char nome1[50], nome2[50], nome3[50];

    printf("Digite um nome qualquer\n");
    scanf("%s", &nome1 );

    printf("\nDigite outro nome qualquer\n");
    scanf("%s", &nome2 );

    printf("\nDigite mais um nome qualquer\n");
    scanf("%s", &nome3);

    printf("\n%s %s \n%s\n", nome1, nome3, nome2);


    return 0;
}
