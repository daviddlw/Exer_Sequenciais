#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Q.36 Um hotel deseja fazer uma promoção especial de final de semana, concedendo um desconto de
    //25% na diária. Sendo informados, através do teclado, o número de apartamentos do hotel e o valor da
    //diária por apartamento para o final de semana completo, elabore um programa para calcular:
    //• Valor promocional da diária;
    //• Valor total a ser arrecadado caso a ocupação neste final de semana atinja 100%;
    //• Valor total a ser arrecadado caso a ocupação neste final de semana atinja 70%;
    //• Valor que o hotel deixará de arrecadar em virtude da promoção, caso a ocupação atinja 100%.

    float num_apartamentos, valor_diaria, diaria_promo, arrecadacao1, arrecadacao2, semArrecadacao;

    //entrada de dados
    printf("Informe o numero de apatamentos: ");
    scanf("%f", &num_apartamentos);
    printf("Informe o valor da diaria: ");
    scanf("%f", &valor_diaria);

    //processamento para calcular o valor da diaria e suas promocoes
    diaria_promo = valor_diaria - (valor_diaria * 0.25);
    arrecadacao1 = diaria_promo * num_apartamentos;
    arrecadacao2 = diaria_promo * num_apartamentos * 0.7;
    semArrecadacao = (valor_diaria * num_apartamentos) - arrecadacao1;

    //imprime o resultado
    printf("Valor promocional da diaria: R$ %.2f\n", diaria_promo);
    printf("Arrecadacao com 100 porcento de ocupacao: R$ %.2f\n", arrecadacao1);
    printf("Arrecadacao com 70 porcento de ocupacao: R$ %.2f\n", arrecadacao2);
    printf("Sem arrecadacao com a promocao: R$ %.2f\n", semArrecadacao);



    return 0;
}
