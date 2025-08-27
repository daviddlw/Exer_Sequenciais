#include <stdio.h>
#include <stdlib.h>

int main(){
    //Q.21 Uma determinada pessoa que trabalha com constru��o de piscinas precisa de um programa que
    //calcule o valor das constru��es solicitadas pelos clientes, sabendo-se que os clientes sempre fornecem
    //o comprimento, a largura e a profundidade da piscina a ser constru�da. Leve em considera��o que o
    //valor da constru��o � cobrado por m3 de �gua que a piscina conter� e o pre�o � de R$ 45.00 por m3.

    //Defini�oes das variaveis
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

    //sa�da dos valores
    printf("O volume da piscina e: %f m3", v);
    printf("O valor a ser cobrado sera: %f", valor);
    return 0;
}
