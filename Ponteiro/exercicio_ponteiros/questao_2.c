#include <stdio.h>

int checa_ocorrencias(int numeros[], int tam_numeros, int numeros_2[], int tam_numeros_2){
    int i, j, semelhaca = 0;
    int copia[tam_numeros + tam_numeros_2];
    for(i = 0;i < (tam_numeros + tam_numeros_2);i++){
        copia[i] = 0;
    }

    for(i = 0;i < tam_numeros;i++){
        for(j = 0;j < tam_numeros_2;j++){
            if(numeros[i] == numeros[j]){
                copia[i] = 1;
            }
        }
    }

    for(i = 0;i < (tam_numeros + tam_numeros_2);i++){
        if(copia[i] != 0){
            semelhaca++;
        }
    }

    return semelhaca;
}

int main(){
    int tam_1, tam_2, i, resultado;

    printf("Digite a quantidade de elementos do primeiro vetor:\n");
    scanf("%d", &tam_1);

    printf("Digite a quantidade de elementos do primeiro vetor:\n");
    scanf("%d", &tam_2);

    int numeros[tam_1], numeros_2[tam_2];

    printf("Digite os elementos do vetor 1:\n");
    for(i = 0;i < tam_1;i++){
        scanf("%d", &numeros[i]);
    }

    printf("Digite os elementos do vetor 2:\n");
    for(i = 0;i < tam_2;i++){
        scanf("%d", &numeros_2[i]);
    }

    resultado = checa_ocorrencias(numeros, tam_1, numeros_2, tam_2);

    printf("A quantidade de elements que eles tem em comum: %d\n", resultado);
    return 0;
}