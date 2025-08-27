#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Q.25 Faça um algoritmo que após a entrada de uma determinada distância entre dois pontos (em KM) e
    //uma determinada velocidade (km/h), diga qual o tempo médio que levará para chegada a esse local e
    //qual a velocidade em metros/segundo.

    //Definicao das variaveis
    float distancia, velocidade, tempo, velocidade_M;

    //Entrada dos dados
    printf("Informe a distancia|KM|: ");
    scanf("%f", &distancia);
    printf("Informe a velocidade media|Km/h|");
    scanf("%f", &velocidade);

    //calculo/processamento do tempo e da velocidade em m/s
    tempo = distancia / velocidade;
    velocidade_M = velocidade * 1000 / 3600;

    //Imprimir os resultados
    printf("Tempo medio para chegar e: %.2f horas\n", tempo);
    printf("A velociade em m/s e: %.2f", velocidade_M);

    return 0;
}
