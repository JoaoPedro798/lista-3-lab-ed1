#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <string.h>

int main() {
    setlocale(LC_ALL, "portuguese");

    typedef struct{
        char modelo[10];
        int ano_fabricacao;
        float preco;
    }carro;

    carro dados[10];

    strcpy(dados[0].modelo, "Vectra");
    dados[0].ano_fabricacao = 2009;
    dados[0].preco = 58000;

    strcpy(dados[1].modelo, "Polo");
    dados[1].ano_fabricacao = 2008;
    dados[1].preco = 45000;

    printf("modelo: %s\nano de fabricação: %d\npreço: %.3f\n",
        dados[1].modelo, dados[1].ano_fabricacao, dados[1].preco);

    return 0;
}
