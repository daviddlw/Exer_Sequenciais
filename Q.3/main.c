#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Q.3 Fa�a um algoritmo que receba dois n�meros inteiros, calcule e imprima a divis�o do primeiro n�mero pelo segundo.
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

    //imprimir o resultado da divis�o
    printf("===========================================");
    printf("A diferenca e: %d", divisao);

    return 0;
}
