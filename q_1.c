#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main() {
    setlocale(LC_ALL, "portuguese");

    int n;

    while(n < 2){
        printf("informe a quantidade de alunos: ");
        scanf("%d", &n);
        if (n < 2){
            printf("\na quantidade deve ser maior que 2\n\n");
        }
    }

    float *ptr = (float *) malloc(n * sizeof(float));
    if (ptr == NULL){
        printf("erro na alocação de memória\n");
    }

    printf("informe a nota do primeiro aluno e segundo aluno: ");
    scanf("%f%f", &ptr[0], &ptr[1]);

    printf("nota do aluno 1: %.2f\nnota do aluno 2: %.2f\n", ptr[0], ptr[1]);

    free(ptr);
    return 0;
}
