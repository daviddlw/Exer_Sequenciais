#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Q.34 Cada degrau de uma escada tem uma altura X. Fa�a um algoritmo que receba essa altura e a altura
    //que o usu�rio deseja alcan�ar subindo a escada. Calcule e mostre quantos degraus o usu�rio dever�
    //subir para atingir seu objetivo.

    float h_degrau, h_objetivo, numeros_degraus;

    printf("Digite a altura de cada degrau: ");
    scanf("%f", &h_degrau);
    printf("Digite a altura que deseja alcancar: ");
    scanf("%f", &h_objetivo);

    numeros_degraus = (h_degrau / h_objetivo) + 1;

    printf("O numero de degraus que ele deve subir e: %.2f", numeros_degraus);

    return 0;
}
