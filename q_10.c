#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

typedef struct {
    char caractere;
    int valor;
} ascii;

ascii funcao(char c, int v) {
    ascii p;
    p.caractere = c;
    p.valor = v;
    return p;
}

int main() {
    setlocale(LC_ALL, "portuguese");
    
    char c;
    int v;
    
    printf("Digite um caractere: ");
    scanf(" %c", &c);
    
    printf("Digite um valor: ");
    scanf("%d", &v);
    
    ascii resultado = funcao(c, v);
    
    printf("\nValores armazenados:\n");
    printf("Caractere: %c\n", resultado.caractere);
    printf("Valor: %d\n", resultado.valor);
    
    return 0;
}