
#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

typedef enum{
    Aprovado,
    Trancado,
    Reprovado
}Situacao;

typedef struct{
    int matricula;
    int codigo_disc;
    Situacao situacao;
}aluno;

void func(aluno *p1){
    const char *p2;

    switch(p1[0].situacao){
        case 0:
            p2 = "Aprovado";
            break;
        case 1:
            p2 = "Trancado";
            break;
        case 2:
            p2 = "Reprovado";
            break;
        default:
            p2 = "Situa��o inv�lida";
            break;
    }

    printf("matr�cula: %d\nc�digo da disciplina: %d\nsitua��o: %s\n", 
           p1[0].matricula, p1[0].codigo_disc, p2);
}

int main (){
    setlocale(LC_ALL,"portuguese");

    int n;

    printf("informe o n�mero de alunos: ");
    scanf("%d", &n);

    aluno *p = (aluno *) malloc (n * sizeof(aluno));
    if (p == NULL){
        printf("erro na aloca��o de mem�ria\n");
        return 1;
    }

    printf("informe a matr�cula e o c�digo da disciplina do 1� aluno: ");
    scanf("%d%d", &p[0].matricula, &p[0].codigo_disc);

    printf("informe 0 para Aprovado, 1 para Trancado ou 2 para Reprovado: ");
    scanf("%d", &p[0].situacao);

    

    func(p);
    free(p);
    
    
    return 0;
}