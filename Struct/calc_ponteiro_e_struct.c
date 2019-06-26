#include <stdio.h>

typedef struct{
    int* soma; 
    int* sub;
    int  mult;
    float div;

}resposta;

void f(int a, int b, resposta* c){
    int aux;
    int aux2;
    
    c -> div = a/b;
    c -> mult = a*b;
    
    aux = (a + b);
    aux2 = (a - b);
    
    (c -> soma) = &aux;
    (c -> sub) = &aux2;
    
} 

int main(){

    
    resposta x;

    f(3, 2, &x);
    printf("a soma eh: %d a subtracao eh: %d a multiplicacao eh: %d a divisao eh: %f\n",*x.soma ,*x.sub ,x.mult ,x.div);


    return 0;
}