#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Q.27 Um sistema de equações lineares da forma ax + by = c, pode ser resolvido utilizando-se as
    //seguintes fórmulas: y = af-cd/ae-bd | x = ce-bf/ae-bd

    //Definindo as variaveis
    int a, b, c, d, e, f, y, x;

    //Entrada de dados
    printf("Informe o valor de |a|: ");
    scanf("%d", &a);
    printf("Informe o valor de |b|: ");
    scanf("%d", &b);
    printf("Informe o valor de |c|: ");
    scanf("%d", &c);
    printf("Informe o valor de |d|: ");
    scanf("%d", &d);
    printf("Informe o valor de |e|: ");
    scanf("%d", &e);
    printf("Informe o valor de |f|: ");
    scanf("%d", &f);

    //processamento das equacoes
    x = a*f - c*d / a*e - b*d;
    y = c*e - b*f / a*e - b*d;

    //imprimir os valores do calculo
    printf("o valor do coeficiente X e: %d\n", x);
    printf("o valor do coeficiente Y e: %d", y);

    return 0;
}
