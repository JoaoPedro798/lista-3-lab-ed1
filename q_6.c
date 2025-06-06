/*As instru��es abaixo resultam em um c�digo v�lido? Explique o porqu�.*/
#include <stdio.h>
#include <stdlib.h>

int main() {
    float *peso = (float *) malloc(sizeof(float));
    if (peso == NULL) {
        printf("Erro na aloca��o de mem�ria.\n");
        return 1;
    }

    *peso = 30;
    printf("%.2f\n", *peso);

    free(peso);
    return 0;
}
/*Sim, pois a mem�ria foi alocada dinamicamente e foi liberada corretamente com o uso do free()*/