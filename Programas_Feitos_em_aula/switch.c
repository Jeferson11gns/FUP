#include <stdio.h>

int main(){
	
	int opcao;

	scanf("%d", &opcao);

	switch(opcao){
		case 1:
			printf("a");
			break;
		case 2:
			printf("b");
			break;
		case 3:
			printf("c");
			break;
		default:
			printf("OPCAO INVALIDA");
	}
	printf("\n");
	return 0;
}