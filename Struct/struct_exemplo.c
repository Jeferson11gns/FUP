#include <stdio.h>
#include <string.h>

typedef struct {
    char titulo[100];
    int ano;
    char isbn[20];
    char autor[100];

} livro;

int main(){

    livro x;
    //para acessar um campo da struct;
    //x.titulo

    //para enviar uma string tem que usar srtcpy da biblioteca string
    strcpy(x.titulo, "O senhor dos aneis");

    x.ano = 1954;

    printf("%s", x.titulo);

    return 0;
}
