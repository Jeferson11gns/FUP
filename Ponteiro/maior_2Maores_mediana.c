#include <stdio.h>
#include <stdlib.h>

void f(int* vetor, int* mai, int* seg, float* med, int tam){
    int i,j;

    for(i =0; i < tam; i++){
        for(j = 0; j < tam-1; j++){
            if(vetor[j] > vetor[j+1]){
                
                int aux = vetor[j];
                vetor[j] = vetor[j+1];
                vetor[j+1] = aux;
            }
        }
    }

    *mai = vetor[tam-1];
    *seg = vetor[tam-2];

    if(tam % 2 != 0) *med = vetor[tam/2];
    else  *med = (vetor[tam/2] + vetor[tam/2+1])/2;

}

int main(){
    int tam,i, maior, segmaior;
    float mediana;
    
    printf("O tamanho do vetor: ");
    scanf("%d", &tam);
    
    int* v = (int*) malloc(sizeof(int)*tam);
    
    printf("\nPreencha o vetor: ");
    for(i =0; i < tam; i++)scanf("%d", &v[i]);

    for(i =0; i < tam; i++)printf("%d", v[i]);


    f(v, &maior, &segmaior, &mediana, tam);

    printf("O maior:%d\nO segundo maior:%d\nA mediana:%.1f\n", maior, segmaior, mediana);




    return 0;
}  