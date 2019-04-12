#include <stdio.h>

int main(){
	int a,b,soma=0;
	scanf("%d", &a);
	scanf("%d", &b);

	int x  = a;
	if(a > b){
		printf("invalido\n");
	}else{
		while(x >= a && x <= b){
			if(x%2 == 0 && x%3 ==0){
				soma = soma + x;
			}
			x++;
		}
		printf("%d\n",soma);
	}

	return 0;
}