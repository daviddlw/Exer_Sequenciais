#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
   //Q.1 Fa�a um algoritmo que receba dois n�meros inteiros e imprima a soma desses dois n�meros.
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
