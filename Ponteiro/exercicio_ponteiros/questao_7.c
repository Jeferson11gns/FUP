#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void somaString(char *palavraa, char *palavrab){
    strcat(palavraa, palavrab);
}

int main(){
    char palavraa[100] = "teste";
    char palavrab[] = "abc12345678909876543210";

    somaString(palavraa, palavrab);

    printf("A -> %s\n", palavraa);
    printf("B -> %s\n", palavrab);

    return 0;
}