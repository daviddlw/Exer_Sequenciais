#include <stdio.h>
#include <stdlib.h>

int main(){
    //Q.13 Faça um algoritmo que receba o salário de um funcionário, calcule e imprima o novo salário
    //sabendo-se que este sofreu um aumento de 25%.

    //Definição das variaveis
    float salario, novo_salario;

    //Entrada de dados
    printf("Informe o salario do funcionario: ");
    scanf("%f", &salario);
    //processamento calculo do aumento do salario
    novo_salario = (salario * 0.25) + salario;

    //Imprimir o novo salario
    printf("O novo salario com aumento e: R$ %.3f", novo_salario);

    return 0;
}
