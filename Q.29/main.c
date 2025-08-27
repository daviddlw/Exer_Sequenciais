#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Q.29 A Loja Mamão com Açúcar está vendendo seus produtos em 5 (cinco) prestações sem juros. Faça
    //um algoritmo que receba um valor de uma compra e mostre o valor das prestações

    //Definição das variaveis
    float valor_compra, valor_prestacao;

    //entrada de dados
    printf("Informe o valor da compra: ");
    scanf("%f", &valor_compra);

    //processamento
    valor_prestacao = valor_compra / 5;

    //imprimir o valor da prestacao
    printf("O valor da prestacao e: R$ %.2f", valor_prestacao);

    return 0;
}
