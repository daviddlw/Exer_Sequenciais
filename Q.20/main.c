#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Q.20 Crie um programa que receba valores quaisquer e mostre a média entre eles, o somatório entre eles
    //e o resto da divisão do somatório por cada um dos valores.

    //Definindo as variaveis
    int valor1, valor2, valor3, media, soma;
    float resto1, resto2, resto3;

    //Entrada de dados
    printf("Digite o valor 1: ");
    scanf("%d", &valor1);
    printf("Digite o valor 2: ");
    scanf("%d", &valor2);
    printf("Digite o valor 3: ");
    scanf("%d", &valor3);

    //calculo da somatoria e media
    //calculo do resto da divisao da soma modelo (numero % numero)
    soma = valor1 + valor2 + valor3;
    media = soma/2;
    resto1 = soma % valor1;
    resto2 = soma % valor2;
    resto3 = soma % valor3;

    //imprimindo os resultados
    printf("Somatorio: %d\n", soma);
    printf("A media e: %d\n", media);
    printf("o resto 1 da divisao do somatorio %d: %.1f\n", valor1, resto1);
    printf("o resto 2 da divisao do somatorio %d: %.1f\n", valor2, resto2);
    printf("o resto 3 da divisao do somatorio %d: %.1f\n", valor3, resto3);


    return 0;
}
