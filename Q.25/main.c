#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    //Q.25 Uma pessoa resolveu fazer uma aplicação em uma poupança programada. Para calcular seu
    //rendimento, ela deverá fornecer o valor constante da aplicação mensal, a taxa e o número de meses.
    //Sabendo-se que a fórmula usada para este cálculo é:
    //Valor acumulado = (P*(1 +i)n – 1)/i em que i = taxa, P = aplicação mensal e n = número de meses.

    //Definindo as variaveis
    float i, p, acumulado;
    int n;
    //Entrada de dados
    printf("Informe a aplicacao mensal: ");
    scanf("%f", &p);
    printf("Informe a taxa: ");
    scanf("%f", &i);
    printf("Informe o numero de meses: ");
    scanf("%d", &n);
    //formula do calculo da aplicacao mensal
    i = i / 100;
    acumulado = (p * pow(1+i, n) - 1)/i;
    //imprimir o valor acumulado
    printf("O valor acumulado da aplicacao mensal e: %.2f", acumulado);


    return 0;
}
