#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Q.24 No momento, por conta da administra��o p�blica p�ssima e da corrup��o em todos os setores
    //estatais, os comerciantes est�o procurando aumentar suas vendas oferecendo desconto. Fa�a um
    //algoritmo que possa receber um valor de um produto e que escreva o novo valor tendo em vista que o
    //desconto foi de 9%.

    //definindo variaveis
    float valor_prod, novo_valor;
    //engrada de dados
    printf("Digite o valor do produto: ");
    scanf("%f", &valor_prod);
    //processamento
    novo_valor = valor_prod - (valor_prod * 0.09);
    //exibir o novo valor
    printf("O novo valorr do produto com desconto e: %.2f", novo_valor);

    return 0;
}
