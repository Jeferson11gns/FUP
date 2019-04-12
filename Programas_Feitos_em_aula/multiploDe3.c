#include <stdio.h>

int main(){
	
	int x = 1;
	while(x%3 != 0){
		printf("Digite um numero:\n");
		scanf("%d", &x);
	}
	
	printf("o ultimo numero digitado foi %d e eh multiplo de 3\n", x);
	
	return 0;
}