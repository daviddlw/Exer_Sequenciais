#include <stdio.h>
#include <stdlib.h>

int main(){
    //Q.12 Faça um algoritmo que receba o salário de um funcionário, calcule e imprima o valor do imposto de
    //renda a ser pago, sabendo que o imposto equivale a 5% do salário.

    //definiçoes de variaveis
    float salario, imposto;

    //entrada de dados
    printf("Informe o salario do funcionario: ");
    scanf("%f", &salario);

    //calculo do imposto
    imposto = salario * 0.05;

    //imprimir a valor a ser pago de imposto
    printf("O valor do imposto a ser pago e: %.2f", imposto);

    return 0;
}
