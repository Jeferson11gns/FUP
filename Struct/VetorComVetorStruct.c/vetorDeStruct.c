
#include <stdio.h>
#include <stdlib.h>

typedef struct{
    float* x;
}notas;

int main(){

    int i, tam;
    notas v;
    float  media;
    printf("Quantas notas");
    scanf("%d", &tam);
    
    v.x = (float*) malloc(sizeof(float)*tam);
    
    for(i = 0; i < tam; i++){
        scanf("%f", &v.x[i]);
    }

    for(i = 0; i < tam; i++){
        media += v.x[i];
    }
    media = media/i;

    printf("%.2f", media);
    return 0;
}