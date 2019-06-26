#include <stdio.h>
#include <stdlib.h>

void concat(char * a, char * b){
    int tamA, tamB, cont = 0;
   
    for(tamA = 0; a[tamA]; tamA++);
    for(tamB = 0; b[tamB]; tamB++);
   
 
    
    a = (char*) realloc(a , sizeof(char) * (tamA+tamB+2));

    int i;
    for(i = tamA; b[cont]; i++){
        a[i] = b[cont];
        cont++;
    }    
}

int main(){
    char* a = (char*) malloc(sizeof(char)*3);
    char* b = (char*) malloc(sizeof(char)*10);

    scanf("%s", a);
    scanf("%s", b);

    concat(a, b);

    printf("a -> %s\n", a);
    printf("b -> %s", b);

    free(a);
    free(b);

    return 0;
}