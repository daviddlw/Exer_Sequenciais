#include <stdio.h>
#include <stdlib.h>

int main(){
    //Q.18 Faça um programa que receba a quantidade e o valor de três produtos, no seguinte formato:
    //quantidade1 valor1 quantidade2 valor2 quantidade3 valor3. O programa deve calcular esses valores
    //seguindo a fórmula total = quantidade1* valor1 + quantidade2 * valor2 + quantidade3 * valor3. O valor
    //total deve ser apresentado no final da execução do programa.

    //definindo as variaveis
    int quantidade1, quantidade2, quantidade3;
    float valor1, valor2, valor3, total;

    //entrada de dados com quantidade e valor de cada um
    printf("Digite a quantidade 1 do produto: ");
    scanf("%d", &quantidade1);
    printf("Informe o valor 1 do produto: ");
    scanf("%f", &valor1);
    printf("==========================================\n");
    printf("Digite a quantidade 2 do produto: ");
    scanf("%d", &quantidade2);
    printf("Informe o valor 2 do produto: ");
    scanf("%f", &valor2);
    printf("==========================================\n");
    printf("Digite a quantidade 3 do produto: ");
    scanf("%d", &quantidade3);
    printf("Informe o valor 3 do produto: ");
    scanf("%f", &valor3);
    printf("==========================================\n");
    //formula que calcula os valores
    total = quantidade1 * valor1 + quantidade2 * valor2 + quantidade3 * valor3;

    //resultado
    printf("O valor total dos produtos e: %.2f", total);


    return 0;
}
