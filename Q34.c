#include <stdio.h>
#include <stdlib.h>
/*34) Fa�a um algoritmo que receba o peso e a altura de uma pessoa e calcule o �ndice de massa
corp�rea. Ele mede a rela��o entre peso e altura (peso em Kg, dividido pelo quadrado da altura em
metros). */
int main()
{
    float peso, altura, imc;

    printf("Digite o seu peso em kg:\n");
    scanf("%f", &peso);

    printf("Digite a sua altura em metros:\n");
    scanf("%f", &altura);

    imc = peso / (altura * altura);  // Calcula o IMC: peso / (altura * altura)

    printf("Seu indice de massa corporea (IMC) e:%f\n", imc);
    return 0;
}
