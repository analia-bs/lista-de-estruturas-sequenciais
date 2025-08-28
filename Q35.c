#include <stdio.h>
#include <stdlib.h>
/*35) Um hotel deseja fazer uma promoção especial de final de semana, concedendo um desconto de
25% na diária. Sendo informados, através do teclado, o número de apartamentos do hotel e o valor da
diária por apartamento para o final de semana completo, elabore um programa para calcular:
• Valor promocional da diária;
• Valor total a ser arrecadado caso a ocupação neste final de semana atinja 100%;
• Valor total a ser arrecadado caso a ocupação neste final de semana atinja 70%;
• Valor que o hotel deixará de arrecadar em virtude da promoção, caso a ocupação atinja 100%. */
int main()
{
    int num_apartamentos;
    float diaria_inicial, diaria_final, arrecad100,  arrecad70, desco_total;

    printf("Digite o numero de apartamentos do hotel\n");
    scanf("%d", &num_apartamentos);

    printf("Digite o valor da diaria por apartamento (para o final de semana completo): \nR$ ");
    scanf("%f", &diaria_inicial);

    diaria_final = diaria_inicial*0.75;

    printf(" O valor promocional da diaria com 25 %% de desconto e: R$%f\n", diaria_final);

    arrecad100 = num_apartamentos*diaria_final;

    printf(" A arrecadacao com 100%% de ocupacao: R$ %f\n", arrecad100);

    arrecad70 = (num_apartamentos*0.70)*diaria_final;

    printf("A arrecadacao com 70%% de ocupacao: R$%f\n", arrecad70);

    desco_total = (num_apartamentos*diaria_inicial) - arrecad100;

    printf("O valor que o hotel deixara de arrecadar com promocao caso a ocupacao atinja 100%%: R$ %f\n", desco_total);
    return 0;
}
