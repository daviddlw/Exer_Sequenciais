#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    //Q.8 Fa�a um programa que receba um n�mero inteiro, calcule e imprima:
    //� a raiz quadrada desse n�mero;
    //� esse n�mero elevado ao quadrado.
    int n1, potencia, raiz;

    //entrada de dados
    printf("Digite um numero: ");
    scanf("%d", &n1);

    //fun��es para raiz quadrada e potencia��o
    raiz = sqrt(n1);
    potencia = pow(n1, 2);

    //imprimir os resultados
    printf("A raiz quadrada do numero e: %d\n", raiz);
    printf("A potenciacao desse numero e: %d", potencia);7


    return 0;
}
