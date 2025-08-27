#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Q.28 Ler uma temperatura em graus Celsius e apresentá-la convertida em graus Fahrenheit. A fórmula de
    //conversão é: F=(9*C+160) / 5, sendo F a temperatura em Fahrenheit e C a temperatura em Celsius.

    float F, C;

    //entrada de dados
    printf("Digite a temperatura em celsius|C|");
    scanf("%f", &C);

    //conversao para Fahrenheit
    F = (9*C+160)/5;

    //imprimir o resultado
    printf("A temperatura em celsius de %.1f\npara Fahrenheit e: %.1f", C, F);
    return 0;
}
