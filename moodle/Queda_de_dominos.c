#include <stdio.h>

int main(){

    int quantidade_de_dominos, i, cont = 0;
    scanf("%d", &quantidade_de_dominos);

    int v[quantidade_de_dominos];
    for(i = 0; i < quantidade_de_dominos; i++)
        scanf("%d", &v[i]);
    
    
    for(i = 0; i < quantidade_de_dominos-1; i++){
        if(v[i] <= v[i+1])
            cont++;
        else
            cont = cont;
    }
    
    if(cont == quantidade_de_dominos - 1)
        printf("ok\n");
    else 
        printf("precisa de ajuste\n");
    
    return 0;
}