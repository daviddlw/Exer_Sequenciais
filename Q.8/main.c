#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    //Q.8 Faça um programa que receba um número inteiro, calcule e imprima:
    //• a raiz quadrada desse número;
    //• esse número elevado ao quadrado.
    int n1, potencia, raiz;

    //entrada de dados
    printf("Digite um numero: ");
    scanf("%d", &n1);

    //funções para raiz quadrada e potenciação
    raiz = sqrt(n1);
    potencia = pow(n1, 2);

    //imprimir os resultados
    printf("A raiz quadrada do numero e: %d\n", raiz);
    printf("A potenciacao desse numero e: %d", potencia);7


    return 0;
}
