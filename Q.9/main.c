#include <stdio.h>
#include <stdlib.h>

int main(){
    //Q.9 Fa�a um algoritmo que receba o valor do sal�rio de um funcion�rio e o valor do sal�rio m�nimo. Calcule e
    //imprima quantos sal�rios m�nimos ganha esse funcion�rio.

    float salario, salario_minimo;
    int quantidade;

    //Entrada de dados
    printf("Digite o valor do salario do funcionario: ");
    scanf("%f", &salario);
    printf("Digite o valor do salario minimo: ");
    scanf("%f", &salario_minimo);

    //calculo da quantidade de sa�larios do funcionario
    quantidade = salario / salario_minimo;

    //imprimindo o resultado mostrando a qauntos salario o funcionario recebe
    printf("A quantidade de salario que o funcionario recebe e: %d", quantidade);


    return 0;
}
