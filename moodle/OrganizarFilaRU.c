#include <stdio.h>

int main(){

    int pessoas, i, ContAluno = 0, ContProf = 0;
    
    scanf("%d", &pessoas);
    
    int alun[pessoas], profe[pessoas];

    int v[pessoas];
    for(i = 0; i < pessoas; i++){
        scanf("%d", &v[i]);

        if(v[i] % 2 == 0){
            ContAluno++;
            alun[ContAluno - 1] = v[i];
        }else{ 
            ContProf++;
            profe[ContProf - 1] = v[i];
        }
    }

    int aluno[ContAluno-1];
    int prof[ContProf-1];    
    printf("[ ");
    for(i = 0; i < ContProf; i++)
        printf("%d ", profe[i]);

    printf("]");
    printf("\n");
    printf("[ ");    
    for(i = 0; i < ContAluno; i++)
        printf("%d ", alun[i]);

    printf("]");
    
    return 0;
}