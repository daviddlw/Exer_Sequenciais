#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Q.31 O custo ao consumidor de um carro novo é a soma do custo de fábrica com a percentagem do
    //distribuidor e dos impostos (aplicados, primeiro os impostos sobre o custo de fábrica, e depois a
    //percentagem do distribuidor sobre o resultado). Supondo que a percentagem do distribuidor seja de 28%
    //e os impostos 45%. Escrever um algoritmo que leia o custo de fábrica de um carro e informe o custo ao
    //consumidor do mesmo.

    float fabrica, impostos, consumidor;

    //Entrada de dados
    printf("Informe o custo de fabrica: ");
    scanf("%f", &fabrica);

    // processamento, impostos e percentual
    impostos = fabrica + (fabrica * 0.45);
    consumidor = impostos + (impostos * 0.28);

    //imprimir o resultado
    printf("O custo ao consumidor: R$ %.2f\n", consumidor);
    return 0;
}
