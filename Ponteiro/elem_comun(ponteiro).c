#include <stdio.h>
#include <stdlib.h>

int fnc(int L[], int n, int Q[], int m){
    int i, j, res = 0;

    int* mapa = (int*) malloc(sizeof(int)*m);
    for(i = 0; i < n; i++) mapa[i] = 0;


    for(i = 0; i < n; i++){
        for(j = 0; j < m; j++){
            if(*(L+i) == *(Q+j)) mapa[j] = 1; //l[i] == q[j] 
        }
    }

    for(i = 0; i < n; i++) if(mapa[i] == 1) res++;

    free(mapa);

    return res;
}

int main(){
    int tam1, tam2, i;
    printf("Os tamanhos dos vetores 1 e 2 em ordem\n");
    scanf("%d %d", &tam1, &tam2);

    int* v1 = (int*) malloc(sizeof(int)*tam1);
    int* v2 = (int*) malloc(sizeof(int)*tam2);

    for(i = 0; i < tam1; i++) scanf("%d", v1+i); //&v1[i]
    for(i = 0; i < tam2; i++) scanf("%d", v2+i); //&v2[j]

    int res = fnc(v1, tam1, v2, tam2);

    printf("%d\n", res);

    free(v1);
    free(v2);

    return 0;
}