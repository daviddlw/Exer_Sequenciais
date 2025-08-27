#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

    // Q.11 Calcular e exibir a área de um quadrado a partir do valor de sua diagonal que será digitado.

    //definição das variaveis
    float diagonal, area;

    //entrada de dados
    printf("Digite a diagonal do quadrado: ");
    scanf("%f", &diagonal);

    //processamento
    area = pow(diagonal, 2)/2;

    printf("A area do quadrado a partir da diagonal e: %.1f cm", area);

    return 0;
}

