#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Q.38 Elabore um algoritmo para efetuar o c�lculo da quantidade de combust�vel gasto em uma viagem,
    //utilizando-se um autom�vel que faz 12 Kms por litro. Para obter o c�lculo, o usu�rio dever� fornecer o
    //tempo gasto e a velocidade m�dia durante a viagem. Desta forma, ser� poss�vel obter a dist�ncia
    //percorrida (dist�ncia = tempo * velocidade).

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
