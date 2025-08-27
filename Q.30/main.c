#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Q.30 Faça um algoritmo que receba o preço de custo de um produto e mostre o valor de venda. Sabe-se
    //que o preço de custo receberá um acréscimo de acordo com um percentual informado pelo usuário.

    //definicao de variaveis
    float preco, venda, percentual;

    //entrada de dados
    printf("Informe o preco do produto: ");
    scanf("%f", &preco);
    printf("Digite o percentual: ");
    scanf("%f", &percentual);

    //calculo da venda
    venda = preco + (preco * percentual/100);

    //imprimir o resultado
    printf("O valor da venda e: %.2f", venda);

    return 0;
}
