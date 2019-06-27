#include <stdio.h>
#include <stdlib.h>

typedef struct {

    char nome[81];
    char matricula[8];
    char turma[1];
    float p1;
    float p2;
    float p3;//sorria

}aluno;


float media(aluno* n){
    float media = ((n -> p1) + (n -> p2) + (n -> p3))/3;
    return media;

}

void imprime_reprovados(aluno* v[], int tam){
    printf("\n\n*****REPROVADOS*******\n");
    
    
    for(int i = 0; i < tam; i++){
        
        float res = media(v[i]);

        if(res < 5){
            printf("|%s|", v[i] -> matricula );
            printf("|%s |", v[i] -> nome );

            printf("|%s |", v[i] -> turma );

            printf("|%.2f |", v[i] -> p1 );
            printf("|%.2f| ", v[i] -> p2 );
            printf("|%.2f|\n", v[i] -> p3 );
        }
    }
}

void imprime_turma(aluno* v[], int tam){
    printf("\n*****TURMA*******\n");
    
    for(int i = 0; i < tam;i++){
        
        
        printf("|%s|", v[i] -> matricula );
         printf("|%s |", v[i] -> nome );

         printf("|%s |", v[i] -> turma );

         printf("|%.2f |", v[i] -> p1 );
         printf("|%.2f| ", v[i] -> p2 );
         printf("|%.2f|\n", v[i] -> p3 );

    }

}


int main(){

    int tam, i;
    
    printf("Quantos alunos seram: ");
    scanf("%d", &tam);

    aluno* dados[tam];

    printf("-------CADASTRO ALUNO-------\n");
    for(i = 0; i < tam; i++){
        
        dados[i] = (aluno*) malloc(sizeof(aluno));
        
        printf("matricula do %do aluno: ", i+1);
        scanf("%s", dados[i] -> matricula);
        
        printf("nome do %do aluno: ", i+1);
        scanf("%s", dados[i] -> nome);

        printf("turma do %do aluno: ", i+1);
        scanf("%s", dados[i] -> turma);


        printf("\nnotas do %do aluno\n ", i+1);
        
        printf("1a nota: ");
        scanf("%f", &dados[i] -> p1);
        printf("2a nota: ");
        scanf("%f", &dados[i] -> p2);
        printf("3a nota: ");
        scanf("%f", &dados[i] -> p3);



    }

    imprime_turma(dados, tam);
    imprime_reprovados(dados, tam);

    for(i = 0; i < tam; i++){
        free(dados[i]);
    }
    
    return 0;
}