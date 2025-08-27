#include <stdio.h>
#include <stdlib.h>

int main(){
    // Q.16 Faça um algoritmo que receba o ano de nascimento de uma pessoa e o ano atual. Calcule e
    //imprima:
    //• a idade dessa pessoa;
    //• essa idade convertida em semanas.

    //definindo as variaveis
    int ano_nascimento, ano_atual, idade, semanas;

    //entrada de dados
    printf("Digite o ano de nascimento: ");
    scanf("%d", &ano_nascimento);
    printf("Digite o ano atual: ");
    scanf("%d", &ano_atual);

    //Calculo para descobrir a idade e as semanas
    idade = ano_atual - ano_nascimento;
    semanas = idade * 52;

    //imprimir os resultados
    printf("A idade da pessoa e: %d\n", idade);
    printf("A idade convertida em semana e: %d", semanas);

    return 0;
}
