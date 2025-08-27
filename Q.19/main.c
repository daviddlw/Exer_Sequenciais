#include <stdio.h>
#include <stdlib.h>

int main(){
    //Q.19 Crie um programa que receba a largura e o comprimento de um lote de terra e mostre a área total
    //existente.

    //definindo variaveis
    float largura, comprimento, area_total;

    //entrada de dados
    printf("Informe a largura do lote de terra: ");
    scanf("%f", &largura);
    printf("Informe a comprimento do lote de terra: ");
    scanf("%f", &comprimento);

    //processamento da area total
    area_total = largura * comprimento;

    //imprimir o resultado
    printf("A area total do lote de terra: %.2f m", area_total);

    return 0;
}
