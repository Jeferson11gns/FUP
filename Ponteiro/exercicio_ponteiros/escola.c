#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct{
    char nome[80];
    char matricula[8];
    char turma;
    float p1;
    float p2;
    float p3;
} aluno;

float calcula_media(aluno* aluno){
    return ((aluno->p1 + aluno->p2 + aluno->p3) / 3);
}

void imprime_escola(aluno* alunos[], int qtd){
    char voltar;
    int i;

    printf("\e[H\e[2J");
    printf("######################ESCOLA#######################\n");

    printf("Nome | Matri | Tur | p1 | p2 | p3 | media\n");
    for(i = 0;i < qtd;i++){
        printf("%s | %s | %c | %.2f | %.2f | %.2f | %.2f\n", alunos[i]->nome, alunos[i]->matricula, alunos[i]->turma, alunos[i]->p1, alunos[i]->p2, alunos[i]->p3, calcula_media(alunos[i]));
    }

    printf("Deseja voltar ao menu\n");
    scanf(" %c", &voltar);
    if(voltar == 's'){}
}

void imprime_turma(aluno* alunos[], char turma, int qtd){
    char voltar;
    int i;

    printf("\e[H\e[2J");
    printf("############################TURMA %c##########################\n", turma);

    printf("Nome | Matri | Tur | p1 | p2 | p3 | media\n");
    for(i = 0;i < qtd;i++){
        if(turma == alunos[i]->turma){
            printf("%s | %s | %c | %.2f | %.2f | %.2f | %.2f\n", alunos[i]->nome, alunos[i]->matricula, alunos[i]->turma, alunos[i]->p1, alunos[i]->p2, alunos[i]->p3, calcula_media(alunos[i]));
        }
    }

    printf("Deseja voltar ao menu\n");
    scanf(" %c", &voltar);
    if(voltar == 's'){}
}

void imprime_reprovados(aluno* alunos[], int qtd){
    char voltar;
    int i;

    printf("\e[H\e[2J");
    printf("######################REPROVADOS##########################\n");

    printf("Nome | Matri | Tur | p1 | p2 | p3 | media\n");
    for(i = 0;i < qtd;i++){
        if(calcula_media(alunos[i]) <= 5){
            printf("%s | %s | %c | %.2f | %.2f | %.2f | %.2f\n", alunos[i]->nome, alunos[i]->matricula, alunos[i]->turma, alunos[i]->p1, alunos[i]->p2, alunos[i]->p3, calcula_media(alunos[i]));
        }
    }

    printf("Deseja voltar ao menu\n");
    scanf(" %c", &voltar);
    if(voltar == 's'){}
}

void imprime_aprovados(aluno* alunos[], int qtd){
    char voltar;
    int i;

    printf("\e[H\e[2J");
    printf("#######################APROVADOS#######################\n");

    printf("Nome | Matri | Tur | p1 | p2 | p3 | media\n");
    for(i = 0;i < qtd;i++){
        if(calcula_media(alunos[i]) > 5){
            printf("%s | %s | %c | %.2f | %.2f | %.2f | %.2f\n", alunos[i]->nome, alunos[i]->matricula, alunos[i]->turma, alunos[i]->p1, alunos[i]->p2, alunos[i]->p3, calcula_media(alunos[i]));
        }
    }

    printf("Deseja voltar ao menu\n");
    scanf(" %c", &voltar);
    if(voltar == 's'){}
}

void imprime_aluno(aluno* alunos[], int qtd, char aluno[]){
    char voltar;
    int i;

    printf("\e[H\e[2J");
    printf("####################ALUNO#####################\n");

    printf("Nome | Matri | Tur | p1 | p2 | p3 | media\n");
    for(i = 0;i < qtd;i++){
        if(strcmp(aluno, alunos[i]->nome) == 0){
            printf("%s | %s | %c | %.2f | %.2f | %.2f | %.2f\n", alunos[i]->nome, alunos[i]->matricula, alunos[i]->turma, alunos[i]->p1, alunos[i]->p2, alunos[i]->p3, calcula_media(alunos[i]));
        }
    }

    printf("Deseja voltar ao menu:\n");
    scanf(" %c", &voltar);
    if(voltar == 's'){}
}

int main(){
    int i, d_novo = 1, opcao, qtd_alunos, cadastrar = 0, teste_matricula;
    char turma, aluno_busca[50];

    printf("Digite a quantidade de alunos\n");
    scanf("%d", &qtd_alunos);

    aluno* alunos[qtd_alunos];

    while(d_novo){
        printf("\e[H\e[2J");
        printf("#########################MENU##############################\n");
        printf("1 - Preencher Alunos\n");
        printf("2 - Exibir Escola\n");
        printf("3 - Exibir Turma\n");
        printf("4 - Exibir Aprovados\n");
        printf("5 - Exibir Reprovados\n");
        printf("6 - Pesquisar por Aluno\n");
        printf("7 - Sair\n");
        scanf("%d", &opcao);

        switch(opcao){
        case 1:
            if(cadastrar == 0){
                cadastrar = 1;
                for(i = 0;i < qtd_alunos;i++){
                    alunos[i] = (aluno*) malloc(sizeof(aluno));

                    printf("Digite o nome do aluno %d\n", i + 1);
                    scanf("%s", alunos[i]->nome);

                    printf("Digite a matricula do aluno %d\n", i + 1);
                    scanf("%s", alunos[i]->matricula);

                    teste_matricula = strlen(alunos[i]->matricula);

                    if(teste_matricula > 8){
                        printf("Matricula acima dos 8 caracteris\n");
                        printf("Digite novamente a matricula do aluno %d\n", i + 1);
                        scanf("%s", alunos[i]->matricula);
                    }

                    printf("Digite a turma do aluno %d\n", i + 1);
                    scanf(" %c", &alunos[i]->turma);

                    printf("Digite a primera nota do aluno %d\n", i + 1);
                    scanf("%f", &alunos[i]->p1);

                    if(alunos[i]->p1 < 0 || alunos[i]->p1 > 10){
                        printf("Nota nao esta nos padroes de 0 a 10\n");
                        printf("Digite novamente a primera nota do aluno %d\n", i + 1);
                        scanf("%f", &alunos[i]->p1);
                    }

                    printf("Digite a segunda nota do aluno %d\n", i + 1);
                    scanf("%f", &alunos[i]->p2);

                    if(alunos[i]->p2 < 0 || alunos[i]->p2 > 10){
                        printf("Nota nao esta nos padroes de 0 a 10\n");
                        printf("Digite novamente a primera nota do aluno %d\n", i + 1);
                        scanf("%f", &alunos[i]->p2);
                    }

                    printf("Digite a terceira nota do aluno %d\n", i + 1);
                    scanf("%f", &alunos[i]->p3);

                    if(alunos[i]->p3 < 0 || alunos[i]->p3 > 10){
                        printf("Nota nao esta nos padroes de 0 a 10\n");
                        printf("Digite novamente a primera nota do aluno %d\n", i + 1);
                        scanf("%f", &alunos[i]->p3);
                    }
                }
            }else{
                printf("OS ALUNOS JA FORAM PREENCHIDOS!!!\n");
            }
            break;

        case 2:
            if(cadastrar == 1){
                imprime_escola(alunos, qtd_alunos);
            }else{
                printf("Nao e possivel exibir a escola sem cadastrar os alunos\n");
            }

            break;

        case 3:
            if(cadastrar == 1){
                printf("Digite qual turma deseja imprimir:\n");
                scanf(" %c", &turma);

                imprime_turma(alunos, turma, qtd_alunos);
            }else{
                printf("Nap e possivel exibir turmas sem cadastrar os alunos\n");
            }

            break;

        case 4:
            if(cadastrar == 1){
                imprime_aprovados(alunos, qtd_alunos);
            }else{
                printf("Nao e possivel exibir alunos aprovados sem cadastrar os alunos\n");
            }

            break;

        case 5:
            if(cadastrar == 1){
                imprime_reprovados(alunos, qtd_alunos);
            }else{
                printf("Nao e possivel exibr alunos reprovados sem cadastrar os alunos\n");
            }

            break;

        case 6:
            if(cadastrar == 1){
                printf("Digite o nome do aluno:\n");
                scanf("%s", aluno_busca);

                imprime_aluno(alunos, qtd_alunos, aluno_busca);
            }else{
                printf("Nao e possivel exibir um aluno sem cadastar os alunos\n");
            }

            break;

        case 7:
            d_novo = 0;
            break;

        default:
            d_novo = 0;
        }
    }

    for(i = 0; i < qtd_alunos;i++){
        free(alunos[i]);
    }

    return 0;
}
