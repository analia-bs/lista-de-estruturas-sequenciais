#include <stdio.h>
#include <stdlib.h>
//6) Fa�a um algoritmo que receba um n�mero inteiro, calcule e imprima a tabuada de multiplica��o desse n�mero.
int main()
{
    int num1; //declarar aa vari�vel

    printf("Digite um numero\n");
    scanf("%d", &num1); //ler e guardar na vari�vel num1

    printf("Tabuada do %d", num1);
    printf("\n1 x %d = %d", num1, num1*1);
    printf("\n2 x %d = %d", num1, num1*2);
    printf("\n3 x %d = %d", num1, num1*3);
    printf("\n4 x %d = %d", num1, num1*4);
    printf("\n5 x %d = %d", num1, num1*5);
    printf("\n6 x %d = %d", num1, num1*6);
    printf("\n7 x %d = %d", num1, num1*7);
    printf("\n8 x %d = %d", num1, num1*8);
    printf("\n9 x %d = %d", num1, num1*9);
    printf("\n10 x %d = %d", num1, num1*10);

    return 0;
}
