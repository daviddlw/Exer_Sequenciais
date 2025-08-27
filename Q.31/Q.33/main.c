#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Q.33 Faça um algoritmo que receba o ano de nascimento de uma pessoa e o ano atual, calcule e mostre:
    //• A idade dessa pessoa;
    //•Quantos anos ela terá em 2028.

    //definindo as variaveis
    int ano_nascimento, ano_atual, idade, ano_2028;

    //entrada de dados
    printf("Digite o ano de nascimento: ");
    scanf("%d", &ano_nascimento);
    printf("Digite o ano atual: ");
    scanf("%d", &ano_atual);

    //Calculo para descobrir a idade e as quantos anos em 2028
    idade = ano_atual - ano_nascimento;
    ano_2028 = 2028 - ano_nascimento;

    //imprimir os resultados
    printf("A idade da pessoa e: %d\n", idade);
    printf("A idade dela em 2028 e: %d", ano_2028);
    return 0;
}
