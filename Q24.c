#include <stdio.h>
#include <stdlib.h>
#include <math.h>
//24) Uma pessoa resolveu fazer uma aplica��o em uma poupan�a programada. Para calcular seu
//rendimento, ela dever� fornecer o valor constante da aplica��o mensal, a taxa e o n�mero de meses.
//Sabendo-se que a f�rmula usada para este c�lculo �:
//Valor acumulado = (P*(1 +i)^n � 1)/i  em que i = taxa, P = aplica��o mensal e n = n�mero de meses.
int main()
{
    float aplic_mensal, taxa, meses, valor_acum;

    printf("Valor constante da aplicacao mensal\n");
    scanf("%f", &aplic_mensal);

    printf("Quantos porcentos e a taxa\n");
    scanf("%f", &taxa);

    taxa=taxa/100;

    printf("Numero de meses\n");
    scanf("%f", &meses);

    valor_acum = aplic_mensal*(pow(1+taxa,meses)-1)/taxa;

    printf("%f", valor_acum);

    return 0;
}
