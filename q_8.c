#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main(){
    setlocale(LC_ALL,"portuguese");

    int n;

    printf("informe o tamanho do vetor: ");
    scanf("%d", &n);

    int *p = (int *) malloc(n * sizeof(int));
    if (p == NULL){
        printf("erro na alocação de memória\n");
        return 1;
    }

    for(int i = 0; i < n; i++){
        printf("informe o %dº número: ", i + 1);
        scanf("%d", &p[i]);
    }

    printf("números informados: \n");
    for(int i = 0; i < n; i++){
        printf("%d ", p[i]);
    }

    free(p);

    return 0;
}