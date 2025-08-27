#include <stdio.h>
#include <stdlib.h>

int main(){
    //Q.9 Faça um algoritmo que receba o valor do salário de um funcionário e o valor do salário mínimo. Calcule e
    //imprima quantos salários mínimos ganha esse funcionário.

    float salario, salario_minimo;
    int quantidade;

    //Entrada de dados
    printf("Digite o valor do salario do funcionario: ");
    scanf("%f", &salario);
    printf("Digite o valor do salario minimo: ");
    scanf("%f", &salario_minimo);

    //calculo da quantidade de saçlarios do funcionario
    quantidade = salario / salario_minimo;

    //imprimindo o resultado mostrando a qauntos salario o funcionario recebe
    printf("A quantidade de salario que o funcionario recebe e: %d", quantidade);


    return 0;
}
