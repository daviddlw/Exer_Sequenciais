#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Q.39 Considerando uma eleição de apenas 2 candidatos, elabore um algoritmo que leia do teclado o
    //número total de eleitores, o número de votos do primeiro candidato e o número de votos do segundo
    //candidato. Em seguida, o algoritmo deverá apresentar o percentual de votos de cada um dos candidatos
    //e o percentual de votos nulos.

    //definições das variaveis
    int num_eleitores, votos_cand1, votos_cand2;
    float percentual1, percentual2, percentual_nulo;

    //engtrada de dados
    printf("Informe o numero de eleitores: ");
    scanf("%d", &num_eleitores);
    printf("Informe o numero de votos candidato 1: ");
    scanf("%d", &votos_cand1);
    printf("Informe o numero de votos candidato 2: ");
    scanf("%d", &votos_cand2);

    //calculo do percentual
    percentual1 = votos_cand1 / (num_eleitores * 100);
    percentual2 = votos_cand2 / (num_eleitores * 100);
    percentual_nulo = 100 - (percentual1 + percentual2);

    //imprimir os percentuais
    printf("Percentual de votos do primeiro candidato e: %.2f\n", percentual1);
    printf("Percentual de votos do segundo candidato: %.2f\n", percentual2);
    printf("Percentual de votos nulos: %.2f\n", percentual_nulo);


    return 0;
}
