#include <stdio.h>

int main(){

    int tamanho_vetor = 5, maior = 0, menor = 0, i;
    int v[tamanho_vetor];

    for(i = 0; i < tamanho_vetor; i++)
        scanf("%d", &v[i]);
    
    maior = v[0];
    menor = v[0];
    
    for(i = 0; i < tamanho_vetor; i++){
         if(v[i] > maior)
            maior = v[i];
        if(v[i] < menor)
            menor = v[i];
    }
    printf("%d", maior + menor);


    return 0;
}