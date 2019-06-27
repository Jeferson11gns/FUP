#include <stdio.h>
#include <math.h>

int calcula_raizes(int coe[], float* x1, float* x2){
    float delta = (pow(coe[1], 2) - 4 * coe[0] * coe[2]);
    delta = sqrt(delta);

    if(delta == 0){
        *x1 = (-(coe[1]) + delta) / 2 * coe[1];
        return 1;
    }else if(delta > 0){ 
        *x1 = (-(coe[1]) + delta) / 2 * coe[1];
        *x2 = (-(coe[1]) - delta) / 2 * coe[1];
        return 2;
    }
    return 0;
}

int main(){
    int coe[3], tam =3, i, resultado;
    float x1, x2;

    printf("Digite os valores dos coeficientes a,b e c da equacao quadratica:\n");
    for(i = 0;i < tam;i++){
        scanf("%d", &coe[i]);
    }

    resultado = calcula_raizes(coe, &x1, &x2);

    if(resultado == 0){
        printf("A equacao nao possui raizer reais!\n");
    }else if(resultado == 1){
        printf("X1 e X2 da equacao: %.2f\n", x1);
    }else{
        printf("X1 da equacao: %.2f\n", x1);
        printf("X2 da equacao: %.2f\n", x2);
    }
    return 0;
}