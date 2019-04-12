#include <stdio.h>

int main(){

	int a, b, soma =0;
	
	scanf("%d", &a);
	scanf("%d", &b);
	
	if(a > b){
		printf("invalido");
	}else{
		while(a <= b){
			if(a % 2 == 0)
				soma = soma + a;
			a++; 
		}
		printf("%d", soma);
	}
		
	return 0;
}
