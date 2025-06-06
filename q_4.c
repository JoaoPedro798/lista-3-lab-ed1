#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <string.h>

typedef struct{
    char modelo[20];
    int ano_fabricacao;
    float preco;
}carro;

float total(carro *p1){
    float s;
    s = p1[0].preco + p1[1].preco;
    return s;
}

int main(){
    setlocale(LC_ALL, "portuguese");

    float soma;

    carro *p = (carro *) malloc(10 * sizeof(carro));
    if (p == NULL){
        printf("erro na aloca��o de mem�ria\n");
        return 1;
    }

    printf("informe o modelo, ano de fabrica��o e pre�o do 1� carro: ");
    scanf("%s%d%f", p[0].modelo, &p[0].ano_fabricacao, &p[0].preco);

    printf("informe o modelo, ano de fabrica��o e pre�o do 2� carro: ");
    scanf("%s%d%f", p[1].modelo, &p[1].ano_fabricacao, &p[1].preco);

    soma = total(p);

    printf("total: %.3f\n", soma);

    free(p);
    return 0;
}
