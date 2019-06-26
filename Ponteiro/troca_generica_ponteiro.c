#include <stdio.h>
#include <stdlib.h>

void swap(void* p, void* q, int sise){
 

   char* a = (char*) p;
   char* b = (char*) q;  

    int i;
    for(i = 0; i < sise; i++){
       char aux = a[i];
       a[i] = b[i];
       b[i] = aux;
    }

}

int main(){

    int a = 20, b = 10;
    
    printf("antes\n a -> %d\n", a); 
    printf(" b -> %d", b);

    swap(&a, &b, sizeof(int));

    printf("\ndepois\n a -> %d\n", a);
    printf(" b -> %d", b);

    
    return 0;

}