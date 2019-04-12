#include <stdio.h>

int main(){
    int tamanho, i, cont;
    scanf("%d", &tamanho);
    
    int v[tamanho];
    for(i = 0; i < tamanho; i++)
        scanf("%d", &v[i]);

    int vetorInvertido[tamanho];  
    cont = tamanho;  
    for(i = 0; i < tamanho; i++){
        vetorInvertido[i] = v[cont-1];
        cont--;
        printf("%d ", vetorInvertido[i]);
    }

    
    return 0;
}