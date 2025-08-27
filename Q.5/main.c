#include <stdio.h>
#include <stdlib.h>

int main(){
    //Q.5 Faça um algoritmo que receba duas notas de um aluno e seus respectivos pesos, calcule e imprima a
    //média ponderada dessas notas.
    float nota1, nota2, peso1, peso2, media = 0;

    //Entrada de dados
    printf("Digite a primeira nota: ");
    scanf("%f", &nota1);
    printf("Digite a segunda nota: ");
    scanf("%f", &nota2);
    printf("Peso da primeira nota: ");
    scanf("%f", &peso1);
    printf("Peso da segunda nota: ");
    scanf("%f", &peso2);

    //Processamento para calcular a media ponderad
    media = (nota1 * peso1 + nota2 * peso2) / (peso1 + peso2);

    //Imprimir a media ponderada
    printf("===========================================\n");
    printf("A media ponderada desse aluno e: %.1f \n", media);
    printf("===========================================\n");

    return 0;
}
