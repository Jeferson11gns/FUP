#include <stdio.h>
#include <limits.h>

void vetor(int vet[], int tam, int* maior, int* segundo_maior, float* mediana){
    int i, j, aux;
    for(i = 0;i < tam;i++){
        for(j = i + 1;j < tam;j++){
            if(vet[i] > vet[j]){
                aux = vet[j];
                vet[j] = vet[i];
                vet[i] = aux;
            }
        }
    }
    *maior = vet[tam - 1];
    *segundo_maior = vet[tam - 2];
    if(tam % 2 == 0){
        *mediana = (vet[tam / 2] + (float)vet[tam / 3]) / 2;
    }else{
        *mediana = vet[tam / 2];
    }
}

int main(){
    int tam, i, maior, segundo_maior;
    float mediana;

    printf("digite o tamanho do vetor:\n");
    scanf("%d", &tam);

    int vet[tam];

    printf("Digite os elementos do vetor:\n");
    for(i = 0;i < tam;i++){
        scanf("%d", &vet[i]);
    }

    vetor(vet, tam, &maior, &segundo_maior, &mediana);

    printf("Maior -> %d\n", maior);
    printf("Segundo Maior -> %d\n", segundo_maior);
    printf("Mediana -> %.2f\n", mediana);

    return 0;
}