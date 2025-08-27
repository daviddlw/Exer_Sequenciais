#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Q.38 Elabore um algoritmo para efetuar o cálculo da quantidade de combustível gasto em uma viagem,
    //utilizando-se um automóvel que faz 12 Kms por litro. Para obter o cálculo, o usuário deverá fornecer o
    //tempo gasto e a velocidade média durante a viagem. Desta forma, será possível obter a distância
    //percorrida (distância = tempo * velocidade).

    float tempo, velocidade, distancia, combustivel;

    printf("Informe o tempo gasto: ");
    scanf("%f", &tempo);
    printf("Informe a velocidade media: ");
    scanf("%f", &velocidade);

    distancia = tempo * velocidade;
    combustivel = distancia / 12.0;

    printf("A distancia percorrida foi: %.2f km\n", distancia);
    printf("O combustivel gasto foi de: %.2f litros", combustivel);
    return 0;
}
