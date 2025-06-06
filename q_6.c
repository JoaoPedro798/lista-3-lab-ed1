/*As instruções abaixo resultam em um código válido? Explique o porquê.*/
#include <stdio.h>
#include <stdlib.h>

int main() {
    float *peso = (float *) malloc(sizeof(float));
    if (peso == NULL) {
        printf("Erro na alocação de memória.\n");
        return 1;
    }

    *peso = 30;
    printf("%.2f\n", *peso);

    free(peso);
    return 0;
}
/*Sim, pois a memória foi alocada dinamicamente e foi liberada corretamente com o uso do free()*/