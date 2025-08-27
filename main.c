#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
   //Q.1 Faça um algoritmo que receba dois números inteiros e imprima a soma desses dois números.
    int inteiro1;
    int inteiro2;
    int soma;

    printf("Digite o primeiro inteiro: ");
    scanf("%d", &inteiro1);
    printf("Digite o segundo inteiro: ");
    scanf("%d", &inteiro2);

    soma = inteiro1 + inteiro2;

    printf("A soma dos inteiros e: %d", soma);

    return 0;
}
