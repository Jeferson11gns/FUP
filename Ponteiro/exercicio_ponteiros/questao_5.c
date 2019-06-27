#include <stdio.h>
#include <stdlib.h> 

void troca(void* p, void* q, int tamanho){
    int* a = (int*) malloc(tamanho);
    int* b = (int*) malloc(tamanho);

    a = p;
    b = q;

    int aux = *a;
    *a = *b;
    *b = aux;
} 

int main(){
    int a, b, tamanho = sizeof(int);

    printf("Digite o valor do primeiro numero:\n");
    scanf("%d", &a);

    printf("Digite o valor do segundo numero:\n");
    scanf("%d", &b);

    printf("Antes\n");
    printf("A -> %d\n", a);
    printf("B -> %d\n", b);

    troca(&a, &b, tamanho);

    printf("Depois\n");
    printf("A -> %d\n", a);
    printf("B -> %d\n", b);

    return 0;
}