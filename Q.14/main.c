#include <stdio.h>
#include <stdlib.h>

int main(){
    //Q.14 Sabe-se que o kilowatt de energia custa um quinto do sal�rio m�nimo. Fa�a um algoritmo que
    //receba o valor do sal�rio m�nimo e a quantidade de quilowatts gasta por uma resid�ncia. Calcule e
    //imprima:
    //� o valor, em reais, de cada kilowatt;
    //� o valor, em reais, a ser pago por essa resid�ncia;
    //� o novo valor a ser pago por essa resid�ncia, a partir de um desconto de 15%.

    //Definindo as variaveis identificadas
    float KW, salario_minimo, qtdKW, valorKW, valorPago, valorDesconto;

    //Entrada de dados
    printf("Informe o valor do salario  minimo: ");
    scanf("%f", &salario_minimo);
    printf("Quilowattas gasto pela residencia: ");
    scanf("%f", &qtdKW);

    //Processamento, calculo de cada KW, Valor a ser pago e valor a ser pago com desconto
    KW = salario_minimo * 0.2;
    valorKW = qtdKW * KW;
    valorDesconto = valorKW - (valorKW * 0.15);

    //Impimir os resultados obtidos
    printf("O valor em reais de cada KW e: R$ %.1f\n", KW);
    printf("O valor a ser pago pela residencia: R$ %.2f\n", valorKW);
    printf("O valor a ser pago pela residencia com o desconto: R$ %.2f", valorDesconto);


    return 0;
}
