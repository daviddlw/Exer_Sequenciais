#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Q. 37 Faça um algoritmo que receba o custo de um espetáculo teatral e o preço do convite esse
    //espetáculo. Esse programa deve calcular e mostrar:
    //A quantidade de convites que devem ser vendidos para que pelo menos o custo do espetáculo seja
    //alcançado.
    //•A quantidade de convites que devem ser vendidos para que se tenha um lucro de 23%.

    int custo, preco;
    int conviteCusto, ConviteLucro;

    //entrada de dados
    printf("Informe o custo do espetaculo: ");
    scanf("%d", &custo);
    printf("Informe o preco do convite: ");
    scanf("%d", &preco);

    //processamento para calcular os custos do convite
    conviteCusto = (custo + preco - 1) / preco;
    ConviteLucro = ((custo * 123 / 100) + preco - 1) / preco;

    //resultados dos custos do convite
    printf("os convites para cobrir o custo: %d\n", conviteCusto);
    printf("convites para ter lucro de 23 porcento: %d", ConviteLucro);

    return 0;
}
