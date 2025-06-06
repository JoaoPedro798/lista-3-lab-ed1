#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

void lerNumero(int *numero) {
    printf("Informe um n�mero: ");
    scanf("%d", numero);
}

int main() {
    setlocale(LC_ALL, "portuguese");
    int *p = (int *) malloc(sizeof(int));
    if (p == NULL) {
        printf("Erro na aloca��o de mem�ria\n");
        return 1;
    }

    lerNumero(p);
    printf("N�mero informado: %d\n", *p);
    free(p);
    
    int *p1 = (int *) malloc(sizeof(int));
    if (p1 == NULL) {
        printf("Erro na aloca��o de mem�ria\n");
        return 1;
    }

    lerNumero(p1);
    printf("N�mero informado: %d\n", *p1);
    free(p1);

    return 0;
}