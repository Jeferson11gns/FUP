#include <stdio.h>

int converte(char s[]){
    int r = 0, i;

    for(i = 0; s[i]; i++){
        r = r*10 + (s[i] - '0');
    }
    return r;
}

int main(int argc, char* argv[]){//argv é um vetor de string, argc é o tamanho argv

    int resposta = 0, i;

    if(argv[1][0] == 'm') resposta = 1;

    for(i = 2; i < argc; i++){
        resposta += converte(argv[i]);
    }

    printf("%d", resposta);

    return 0;
}