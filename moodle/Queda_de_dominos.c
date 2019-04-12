#include <stdio.h>

int main(){

    int quantidade_de_dominos, i, menor = 1, cont = 0;
    scanf("%d", &quantidade_de_dominos);

    int v[quantidade_de_dominos];
    for(i = 0; i < quantidade_de_dominos; i++)
        scanf("%d", &v[i]);
    
    menor = v[1];
    for(i = 0; i < quantidade_de_dominos; i++){
        if(v[i] <= menor){
            menor = v[i+2];
            cont++;
        }else{
            menor = menor;
        }
    }
    
    if(cont == quantidade_de_dominos)
        printf("ok\n");
    else 
        printf("precisa de ajuste\n");
    
    return 0;
}