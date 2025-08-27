#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

    // Q.10 Faça um algoritmo que calcule e imprima a área das seguintes figuras geométricas:
    //• triângulo; quadrado; círculo; trapézio; retângulo; losango.

    //definições das variaveis
    float triangulo, quadrado, circulo, trapezio, retangulo, losango;
    float base, altura, lado, raio, pi = 3.14;
    float base_maior, base_menor, diagonal_maior, diagonal_menor;

    //entrada de dados do triangulo
    printf("Triagulo:\n");
    printf("Informe a Base|b| do triangulo: ");
    scanf("%f", &base);
    printf("Informe a Altura|h| do triangulo: ");
    scanf("%f", &altura);

    //formula para calculo do triangulo / processamento
    triangulo = (base * altura)/2;

    //resultado do calculo da area do triangulo
    printf("A area do triangulo e: %.1f\n", triangulo);
    printf("==========================================\n");

    //entradada de dados do quadrado
    printf("Quadrado:\n");
    printf("Informe um Lado|L| do quadradro: ");
    scanf("%f", &lado);
    //calculo da area do quadrado
    quadrado = lado * lado;

    //resultado da area do quadrado
    printf("A area do quadrado e: %.1f\n", quadrado);
    printf("==========================================\n");

    //entradada de dados do circulo
    printf("Circulo:\n");
    printf("Informe o Raio|r| do circulo: ");
    scanf("%f", &raio);
    //calculo da area do circulo
    circulo = pi * pow(raio, 2);

    //resultado da area do circulo
    printf("A area do circulo e: %.1f\n", circulo);
    printf("==========================================\n");


//entradada de dados do trapezio
    printf("Trapezio:\n");
    printf("Informe o Base maior|B| do trapezio: ");
    scanf("%f", &base_maior);
    printf("Informe o Base menor|b| do trapezio: ");
    scanf("%f", &base_menor);
    printf("Informe a altura|h| do trapezio: ");
    scanf("%f", &altura);
    //calculo da area do trapezio
    trapezio = ((base_maior + base_menor) * altura)/2;

    //resultado da area do trapezio
    printf("A area do trapezio e: %.1f\n", trapezio);
    printf("==========================================\n");

    //entrada de dados do retangulo
    printf("Retangulo:\n");
    printf("Informe a Base|b| do retangulo: ");
    scanf("%f", &base);
    printf("Informe a Altura|h| do retangulo: ");
    scanf("%f", &altura);

    //formula para calculo do triangulo / processamento
    retangulo = base * altura;

    //resultado do calculo da area do retangulo
    printf("A area do retandulo: %.1f\n", retangulo);
    printf("==========================================\n");

    //entrada de dados do losango
    printf("Losango:\n");
    printf("Informe a Diagonal maior|D| do losango: ");
    scanf("%f", &diagonal_maior);
    printf("Informe a Diagonal menor|d| do losango: ");
    scanf("%f", &diagonal_menor);

    //formula para calculo do losango
    losango = (diagonal_maior * diagonal_menor)/2;

    //resultado do calculo da area do losango
    printf("A area do losango e: %.1f\n", losango);
    printf("==========================================\n");

    return 0;
}
