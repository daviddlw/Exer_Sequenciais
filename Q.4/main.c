#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Q.4 Fa�a um algoritmo que receba tr�s notas de um aluno, calcule e imprima a m�dia aritm�tica entre essas notas.
    float nota1, nota2, nota3, media = 0;

    //entrada de dados
    printf("Infome a nota1: ");
    scanf("%f", &nota1);
    printf("Infome a nota2: ");
    scanf("%f", &nota2);
    printf("Infome a nota3: ");
    scanf("%f", &nota3);

    //processamento
    media = (nota1 + nota2 + nota3) / 3;

    //imprimir o resultado da divis�o
    printf("===========================================\n");
    printf("A media do aluno e: %.1f\n", media);
    printf("===========================================");

    return 0;
}
