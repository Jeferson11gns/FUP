#include <stdio.h>
#include <stdlib.h>
int str_cmp(char *A, char * B){
    int i, j;
    for(i = 0; i < A[i]; i++){
        if(A[i] > B[i]) return 1;
        else if(B[i] > A[i]) return -1;
    }
    return 0;

}

int main(){

    char* a = (char*) malloc(sizeof(char)*100);
    char* b = (char*) malloc(sizeof(char)*100);

    scanf("%s", a);
    scanf("%s", b);

    int res = str_cmp(a, b);

    printf("%d", res);

    free(a);
    free(b);

    return 0;
}