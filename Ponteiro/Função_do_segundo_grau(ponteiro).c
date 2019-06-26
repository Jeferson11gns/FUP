#include <stdio.h>
#include <math.h>

int EQ2G(float C[], float *px1, float *px2){
    
    float a = C[0], b = C[1], c = C[2];
   
    float Raiz_delta = sqrt(b*b - 4*a*c);

    *px1 = (-b + Raiz_delta)/(2*a);    

    if(Raiz_delta >= 0 && a != 0){
        *px2 = (-b - Raiz_delta)/(2*a);
        return 0;
    }else if(a == 0) return 1;
    else return 2;

}

int main(){

    float coe[3];
    float x1, x2;
    int i;

    printf("Digite os coeficientes A, B, C nao ordem\n");
    for(i = 0; i < 3; i++) scanf("%f", &coe[i]); 

    int res = EQ2G(coe, &x1, &x2);

    if(res == 0){
        if(x1 == x2) printf("A raiz vale: %.1f", x1);
        else printf("o X1 vale: %.1f\n o X2 vale: %.1f\n", x1, x2);
    }else if(res == 1) printf("Polinomio invalido");
    else printf("Raizes nao reias");

    return 0;
}