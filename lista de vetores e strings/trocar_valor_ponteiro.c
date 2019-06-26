#include <stdio.h>
void troca(int* a, int* b){
    int aux = *a;
    *a = *b;
    *b = aux;
}

int main(){
    
    int p = 5, q = 7; 
    troca(&p, &q);
    printf("%d %d", p, q);

    return 0;
}
