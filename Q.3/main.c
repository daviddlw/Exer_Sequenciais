#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Q.3 Faça um algoritmo que receba dois números inteiros, calcule e imprima a divisão do primeiro número pelo segundo.
    int inteiro1;
    int inteiro2;
    int divisao;

    //entrada de dados
    printf("Entre com o primeiro valor: ");
    scanf("%d", &inteiro1);
    printf("Entre com o segundo valor: ");
    scanf("%d", &inteiro2);

    //processamento
    divisao = inteiro1 / inteiro2;

    //imprimir o resultado da divisão
    printf("===========================================");
    printf("A diferenca e: %d", divisao);

    return 0;
}
