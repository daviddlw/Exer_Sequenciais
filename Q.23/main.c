#include <stdio.h>
#include <stdlib.h>

int main(){
    //Q.23 Escreva um algoritmo para trocar os valores de três variáveis A, B e C de modo que A fique com o
    //valor de B, B fique com o valor de C e C fique com o valor de A.

    //definiçoes das variaveis
    int A, B, C, troca;

    // Entrada de dados
    printf("Digite o valor de A: ");
    scanf("%d", &A);
    printf("Digite o valor de B: ");
    scanf("%d", &B);
    printf("Digite o valor de C: ");
    scanf("%d", &C);

    //Processamento / troca dos valores, o "troca" foi adicionado para armazenar o valor
    troca = A;
    A = B;
    B = C;
    C = troca;

    //Imprime os valores
    printf("Valores trocados:\n");
    printf("Valor de A = %d\n", A);
    printf("Valor de B = %d\n", B);
    printf("Valor de C = %d\n", C);
    return 0;
}
