#include <stdio.h>

typedef struct {
    int dia;
    int mes;
    int ano;

} data;

int main(){

    data x;

    printf("diga o dia, o mes e ano");
    scanf("%d %d %d", &x.dia, &x.mes, &x.ano);

    printf("%.2d/%.2d/%.4d\n", x.dia, x.mes, x.ano);

    return 0;
}