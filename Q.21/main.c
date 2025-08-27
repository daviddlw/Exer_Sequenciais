#include <stdio.h>
#include <stdlib.h>

int main(){
    //Q.21 Uma determinada pessoa que trabalha com construção de piscinas precisa de um programa que
    //calcule o valor das construções solicitadas pelos clientes, sabendo-se que os clientes sempre fornecem
    //o comprimento, a largura e a profundidade da piscina a ser construída. Leve em consideração que o
    //valor da construção é cobrado por m3 de água que a piscina conterá e o preço é de R$ 45.00 por m3.

    //Definiçoes das variaveis
    float comprimento, largura, profundidade, valor, v;
    //Entradas dos dados solicitados
    printf("CONSTRUCAO SOLICITADA: \n");
    printf("Informe o valor do comprimento: ");
    scanf("%f", &comprimento);
    printf("Informe o valor da largura: ");
    scanf("%f", &largura);
    printf("Informe a profundidade da piscina: ");
    scanf("%f", &profundidade);

    //processamento calculando os dados
    v = comprimento * largura * profundidade;
    valor = v * 0.45;

    //saída dos valores
    printf("O volume da piscina e: %f m3", v);
    printf("O valor a ser cobrado sera: %f", valor);
    return 0;
}
