#include <stdio.h>
#include <stdlib.h>
/*27)
Ler uma temperatura em graus Celsius e apresent�-la convertida em graus Fahrenheit. A f�rmula de
convers�o �: F=(9*C+160) / 5, sendo F a temperatura em Fahrenheit e C a temperatura em Celsius. */
int main()
{
    int f, c;

    printf("Qual a temperatura em graus Celsius?\n");
    scanf("%d",&c);

    f=(9*c+160)/5;

    printf("A temperatura em graus Fahrenheit e: %dF", f);
    return 0;
}
