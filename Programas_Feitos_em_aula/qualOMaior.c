#include <stdio.h>

int maior(int a){
    int mai;
    int cont = 0;
    while(cont < 3){
        mai = a;

        if(mai < a)
            mai = a;
        
        cont++;
        maior(a);
    }
    
    return mai;
}


int main(){

    int a;
    scanf("%d", &a);
    maior(a);
    printf("%d", maior(a));

    return 0;
}