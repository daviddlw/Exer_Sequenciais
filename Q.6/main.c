#include <stdio.h>
#include <stdlib.h>

int main(){
    //Q.6 Faça um algoritmo que receba um número inteiro, calcule e imprima a tabuada de multiplicação desse número.
    //Definição das variaveis
    int numero;

    //entrada de dados
    printf("Digite um numero para ver sua tabuada: ");
    scanf("%d", &numero);

    //estrutura para imprimir e multiplicar o numero
    printf("Tabuada do numero informado\n");
    printf("%d x 1 = %d\n", numero, numero * 1);
    printf("%d x 2 = %d\n", numero, numero * 2);
    printf("%d x 3 = %d\n", numero, numero * 3);
    printf("%d x 4 = %d\n", numero, numero * 4);
    printf("%d x 5 = %d\n", numero, numero * 5);
    printf("%d x 6 = %d\n", numero, numero * 6);
    printf("%d x 7 = %d\n", numero, numero * 7);
    printf("%d x 8 = %d\n", numero, numero * 8);
    printf("%d x 9 = %d\n", numero, numero * 9);
    printf("%d x 10 = %d\n", numero, numero * 10);


    return 0;
}
