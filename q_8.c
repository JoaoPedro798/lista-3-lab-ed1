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
        printf("erro na aloca��o de mem�ria\n");
        return 1;
    }

    for(int i = 0; i < n; i++){
        printf("informe o %d� n�mero: ", i + 1);
        scanf("%d", &p[i]);
    }

    printf("n�meros informados: \n");
    for(int i = 0; i < n; i++){
        printf("%d ", p[i]);
    }

    free(p);

    return 0;
}