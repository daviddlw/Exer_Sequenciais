#include <stdio.h>
#include <stdlib.h>

int main(){
    // Q.15 Faça um algoritmo que receba o peso de uma pessoa, um valor inteiro, calcule e imprima:
    //• o peso dessa pessoa em gramas;
    //• se essa pessoa engordar 5%, qual será seu novo peso em gramas.

    //Definindo as variaveis
    float peso_gramas, novo_peso;
    int peso;

    //Entrada de dados do peso
    printf("Informe o peso: ");
    scanf("%d", &peso);

    //processamento do peso da pessoa, calculo realizado
    peso_gramas = peso * 1.000;
    novo_peso = peso_gramas + 0.05;

    //Resultado do calculo de peso
    printf("O peso da pessoa em gramas e: %f\n", peso_gramas);
    printf("O pesso da pessoa se engordar 5 porcento: %f", novo_peso);

    return 0;
}
