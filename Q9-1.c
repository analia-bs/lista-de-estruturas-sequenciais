#include <stdio.h>
#include <stdlib.h>
//9-1) Faça um algoritmo que calcule e imprima a área das seguintes figuras geométricas: • triângulo; quadrado; círculo; trapézio; retângulo; losango
int main()
{
    float area, base, altura, lado, pi=3.14, raio, base_maior, base_menor, diagonal_maior, diagonal_menor; //declarar as variáveis

    printf("Digite a base do triangulo\n");
    scanf("%f", &base); //ler e guardar na variável base
    printf("Digite a altura do triangulo\n");
    scanf("%f", &altura); //ler e guardar na variável altura

    area = (base*altura)/2;

    printf("A area do triangulo e: %f", area);

    printf("\nDigite o lado do quadrado\n");
    scanf("%f", &lado); //ler e guardar na variável lado

    area = lado*lado;

    printf("A area do quadrado e: %f", area);

    printf("\nDigite o raio do circulo\n");
    scanf("%f", &raio); //ler e guardar na variável raio

    area = pi*raio*raio;

    printf("A area do circulo e: %f", area);

    printf("\nDigite a base maior do trapezio\n");
    scanf("%f", &base_maior); //ler e guardar na variável base maior
    printf("Digite a base menor do trapezio\n");
    scanf("%f", &base_menor); //ler e guardar na variável base menor
    printf("Digite a altura do trapezio\n");
    scanf("%f", &altura); //ler e guardar na variavel altura

    area = (base_maior+base_menor)*altura/2;

    printf("A area do trapezio e: %f", area);

    printf("\nDigite o lado do retangulo\n");
    scanf("%f", &lado); //ler e guardar na variável lado
    printf("Digite a altura do retangulo\n"); //ler e guargar variavel altura
    scanf("%f", &altura);

    area = lado*altura;

    printf("A area do retangulo e: %f", area);

    printf("\nDigite a diagonal maior do losango\n");
    scanf("%f", &diagonal_maior); //ler e guardar na variável diagonal maior
    printf("Digite a diagonal menor do losango\n");
    scanf("%f", &diagonal_menor); //ler e guardar na variável diagonal menor

    area = (diagonal_maior+diagonal_menor)/2;

    printf("A area do losango e: %f", area);

    return 0;
}
