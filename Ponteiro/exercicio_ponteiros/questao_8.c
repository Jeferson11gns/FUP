#include <stdio.h>

int str_cmp(char* a, char* b){
    int tama, tamb = 0, i;
    for(i = 0;a[i];a++){
        tama++;
    }
    for(i = 0;b[i];i++){
        tamb++;
    }
    if(tama == tamb){
        return 0;
    }else if(tama > tamb){
        return 1;
    }else{
        return -1;
    }
}

int main(){
    char palavraa[] = "teste";
    char palavrab[] = "teste";

    int resultado = str_cmp(palavraa, palavrab);

    if(resultado > 0){
        printf("A string A e maior que a string B\n");
    }else if(resultado == 0){
        printf("A string A e B sao de mesmo tamanho\n");
    }else{
        printf("A string A e menor string B\n");
    }

    return 0;
}
