#include <stdio.h>
#include <stdlib.h>

int main(){
    //Q.22 Entrar via teclado com o valor de cinco produtos. Ap�s as entradas, digitar um valor referente ao
    //pagamento da somat�ria destes valores. Calcular e exibir o troco que dever� ser devolvido.

    //defininfo as variaveis
    float prod1, prod2, prod3, prod4, prod5, pagamento, soma, troco;

    //entrada dos dados do valor dos produtos
    printf("Informe o valor do produto 1: ");
    scanf("%f", &prod1);
    printf("Informe o valor do produto 2: ");
    scanf("%f", &prod2);
    printf("Informe o valor do produto 3: ");
    scanf("%f", &prod3);
    printf("Informe o valor do produto 4: ");
    scanf("%f", &prod4);
    printf("Informe o valor do produto 5: ");
    scanf("%f", &prod5);
    printf("====================================\n");
    printf("Informe o valor do pagamento: ");
    scanf("%f", pagamento);
    printf("====================================\n");

    //calculo da somatoria e troco
    soma = prod1 + prod2 + prod3 + prod4 + prod5;
    troco = soma - pagamento;

    //resultado
    printf("Valor do troco: %.2f", troco);

    return 0;
}
