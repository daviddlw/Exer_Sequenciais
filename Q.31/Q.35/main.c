#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Q.35  Fa�a um algoritmo que receba o peso e a altura de uma pessoa e calcule o �ndice de massa
    //corp�rea. Ele mede a rela��o entre peso e altura (peso em Kg, dividido pelo quadrado da altura em
    //metros).
    //Definir as variaveis
    float peso, altura, imc;

    //Entrada de dados
    printf("Digite o peso da pessoa|Kg|: ");
    scanf("%f", &peso);

    printf("Digite a altura da pessoa|M|: ");
    scanf("%f", &altura);

    //Processamento/calculo imc
    imc = peso / (altura * altura);

    //Imprime o resultado do IMC
    printf("Indice de massa corporea (IMC): %.2f\n", imc);
    return 0;
}


