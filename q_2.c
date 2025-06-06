#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <string.h>

int main(){
    setlocale(LC_ALL,"portuguese");

    typedef struct{
        float diametro;
        char marca[20];
        int modelo;
    } balao;

    balao *ptr = (balao *) malloc(sizeof(balao));
    if (ptr == NULL){
        printf("erro na aloca��o de mem�ria\n");
        return 1;
    }

    printf("informe o di�metro do bal�o: ");
    scanf("%f", &ptr->diametro);

    getchar();

    printf("informe a marca do bal�o: ");
    fgets(ptr->marca, 19, stdin);

    printf("informe o modelo do bal�o: ");
    scanf("%d", &ptr->modelo);

    printf("\ndi�metro: %.2f\nmarca: %smodelo: %d\n", ptr->diametro, ptr->marca, ptr->modelo);

    free(ptr);

    return 0;
}
