
#include <stdio.h>
#include <stdlib.h>

typedef struct{
    float* x;
}notas;

int main(){

    int i, tam;
    float  media;
    printf("Quantas notas");
    scanf("%d", &tam);
    
    notas g[2];
    g[0].x = (float*) malloc(sizeof(float)*tam);
    g[1].x = (float*) malloc(sizeof(float)*tam);
 
    
    for(i = 0; i < 2; i++){
        for(int j = 0; j < tam; j++)
            scanf("%f", &g[i].x[j]);
    }

    for(i = 0; i < 2; i++){
        for(int j = 0; j < tam; j++)
            printf("%f", g[i].x[j]);
    }

    for(i = 0; i < tam; i++){
        media += g[0].x[i];
    }
    media = media/i;

    printf("1o aluno media:%.2f", media);
    return 0;
}