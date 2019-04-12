#include <stdio.h>

float calc(float a, float b, char c){
    float operacao;

    switch (c){
        case '+':
            operacao = a + b;
            break;
        case '-':
            operacao = a - b;
            break;
        case '*':
            operacao = a * b;
            break;
        case '/':
            operacao = a / b;
            break;
        default:
            break;

    return operacao;
    }
}

int main(){
    float n1, n2, result;
    char simbolo;
    
    scanf("%f %c %f", &n1, &simbolo, &n2);
    
    result = calc(n1, n2, simbolo);
    
    printf("%.0f %c %.0f = %.1f ", n1, simbolo, n2, result);



    return 0;
}