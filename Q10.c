#include <stdio.h>
#include <stdlib.h>
#include <math.h>
//10) Calcular e exibir a �rea de um quadrado a partir do valor de sua diagonal que ser� digitado.
int main()
{
    float diagonal, lado, area; //declarar as variaveis

   printf("Digite a diagonal do quadrado: \n");
   scanf("%f", &diagonal);//ler e guardar na variavel diagonal

   lado = diagonal/pow(2,0.5); //sabendo que diagonal do quadrado � lado*raiz de 2. Ent� faz o inverso o lado=diagonal/raiz de 2
   area = lado * lado; //lado ao quadrado ou lado*lado

   printf("A area do quadrado e: %f", area);

    return 0;
}
