#include <stdio.h>
#include <stdlib.h>

int main(){
    //Q.16 Crie um programa que receba tr�s nomes quaisquer por meio da linha de execu��o do programa, e
    //os imprima na tela da seguinte maneira: o primeiro e o �ltimo nomes ser�o impressos na primeira linha
    //um ap�s o outro, o outro nome (o segundo) ser� impresso na segunda linha.

    //definindo as variaveis com chacter de tamanho 20
    char nome1[20], nome2[20], nome3[20];

    //Entrada de dados os nomes
    printf("Digite o primeiro nome: ");
    scanf("%s", &nome1);
    printf("Digite o segundo nome: ");
    scanf("%s", &nome2);
    printf("Digite o terceiro nome: ");
    scanf("%s", &nome3);

    //Imprimindo os nomes
    printf("O nomes informados sao:\n%s | %s\n", nome1, nome3);
    printf("%s", nome2);
    return 0;
}
