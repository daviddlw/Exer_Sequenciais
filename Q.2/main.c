#include <stdio.h>
#include <stdlib.h>

int main()
{
   //Q.2 Fa�a um algoritmo que receba dois n�meros reais, calcule e imprima a subtra��o do primeiro n�mero pelo segundo.
   //defini��o das variaiveis
    float x;
    float y;
    float resultado;

    //entrada de dados
    printf("Digite o primeiro valor: ");
    scanf("%f", &x);
    printf("Digite o segundo valor: ");
    scanf("%f", &y);

    //processamento
    resultado = x - y;

    //imprimir o resultado
    printf("A diferenca e: %.1f", resultado);

    return 0;
}
