#include <stdio.h>
#include <stdlib.h>

int main(){
    //Q.32 Faça um algoritmo que apresente, para um salário informado pelo usuário, um novo salário com
    //aumento de 37%.

    //definicoes das variabeis
    float salario, novo_salario;

    //entrada de dados
    printf("Digite o salario: ");
    scanf("%f", &salario);

    //calculo do novo salario/processamento
    novo_salario = salario + (salario * 0.37);

    //resultado
    printf("O novo salario aumentado e: %.3f", novo_salario);


    return 0;
}
