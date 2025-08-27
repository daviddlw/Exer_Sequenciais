#include <stdio.h>
#include <stdlib.h>

int main(){
    // Q.7 Faça um algoritmo que receba dois números, calcule e imprima um elevado ao outro.
    //definindo as variaveis
    int n1, n2, resultado = 0;

    //entrada de dados
    printf("Digite o primeiro numero: ");
    scanf("%d", &n1);
    printf("Digite o segundo numero: ");
    scanf("%d", &n2);

    //calaculo de um numero elevado ao outro utilizando a função "POW" com a biblioteca Math.h
    resultado = pow(n1, n2);

    //resultado da potenciacao
    printf("O resultado da potenciacao e: %d", resultado);

    return 0;
}
