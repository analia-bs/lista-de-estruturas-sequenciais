#include <stdio.h>
#include <stdlib.h>
/*26) Um sistema de equações lineares da forma ax + by = c, pode ser resolvido utilizando-se as
seguintes fórmulas:
Y = (a*f-c*d)/(a*e-b*d)
e
x = (c*e-b*f)/(a*e-b*d)
 Faça um algoritmo para ler os coeficientes (a,b,c,d,e,f) das equações e calcular e exibir os valores de x e y.*/
int main()
{
    float a, b, c, d, e, f, x, y;

    printf("Digite o valor de a\n");
    scanf("%f", &a );

     printf("Digite o valor de b\n");
     scanf("%f", &b);

     printf("Digite o valor de c\n");
     scanf("%f", &c);

     printf("Digite o valor de d\n");
     scanf("%f", &d);

     printf("Digite o valor de e\n");
     scanf("%f", &e);

     printf("Digite o valor de f\n");
     scanf("%f", &f);

     y = (a*f-c*d)/(a*e-b*d);
     x = (c*e-b*f)/(a*e-b*d);

     printf("O valor de y e: %f \n", y);
     printf ("O valor de x e: %f", x);

     return 0;


}
