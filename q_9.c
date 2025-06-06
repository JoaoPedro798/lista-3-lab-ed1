#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main(){
    setlocale(LC_ALL,"portuguese");

    typedef struct{
        char nome[20];
        char nacao[20];
        char continente[20];
    }local;

    int n;

    printf("quantos locais deseja ir: ");
    scanf("%d", &n);

    getchar();


    local * p = (local *) malloc(n * sizeof(local));
    if (p == NULL){
        printf("erro na alocação de memória\n");
        return 1;
    }

    for(int i = 0; i < n; i++){
        printf("informe o nome  do %dº local: ", i + 1);
        fgets(p[i].nome, 19, stdin);
        printf("informe o nome da nação do %dº local: ", i + 1);
        fgets(p[i].nacao, 19, stdin);
        printf("informe o nome  do continente do %dº local: ", i + 1);
        fgets(p[i].continente, 19, stdin);
    }

    printf("locais informados: \n\n");
    for(int i = 0; i < n; i++){
        printf("%dº local: \n", i + 1);
        printf("nome: %s\nnação: %s\ncontinente: %s\n", p[i].nome, p[i].nacao, p[i].continente);

    }

    free(p);
    return 0;
}