#include <stdio.h>
#include <stdlib.h>
//9-1) Fa�a um algoritmo que calcule e imprima a �rea das seguintes figuras geom�tricas: � tri�ngulo; quadrado; c�rculo; trap�zio; ret�ngulo; losango
int main()
{
    float area, base, altura, lado, pi=3.14, raio, base_maior, base_menor, diagonal_maior, diagonal_menor; //declarar as vari�veis

    printf("Digite a base do triangulo\n");
    scanf("%f", &base); //ler e guardar na vari�vel base
    printf("Digite a altura do triangulo\n");
    scanf("%f", &altura); //ler e guardar na vari�vel altura

    area = (base*altura)/2;

    printf("A area do triangulo e: %f", area);

    printf("\nDigite o lado do quadrado\n");
    scanf("%f", &lado); //ler e guardar na vari�vel lado

    area = lado*lado;

    printf("A area do quadrado e: %f", area);

    printf("\nDigite o raio do circulo\n");
    scanf("%f", &raio); //ler e guardar na vari�vel raio

    area = pi*raio*raio;

    printf("A area do circulo e: %f", area);

    printf("\nDigite a base maior do trapezio\n");
    scanf("%f", &base_maior); //ler e guardar na vari�vel base maior
    printf("Digite a base menor do trapezio\n");
    scanf("%f", &base_menor); //ler e guardar na vari�vel base menor
    printf("Digite a altura do trapezio\n");
    scanf("%f", &altura); //ler e guardar na variavel altura

    area = (base_maior+base_menor)*altura/2;

    printf("A area do trapezio e: %f", area);

    printf("\nDigite o lado do retangulo\n");
    scanf("%f", &lado); //ler e guardar na vari�vel lado
    printf("Digite a altura do retangulo\n"); //ler e guargar variavel altura
    scanf("%f", &altura);

    area = lado*altura;

    printf("A area do retangulo e: %f", area);

    printf("\nDigite a diagonal maior do losango\n");
    scanf("%f", &diagonal_maior); //ler e guardar na vari�vel diagonal maior
    printf("Digite a diagonal menor do losango\n");
    scanf("%f", &diagonal_menor); //ler e guardar na vari�vel diagonal menor

    area = (diagonal_maior+diagonal_menor)/2;

    printf("A area do losango e: %f", area);

    return 0;
}
