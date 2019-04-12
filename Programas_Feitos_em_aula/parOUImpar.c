#include <stdio.h>

int main(){
	int numero1, numero2, soma;

	printf("Digite o 1° numero: ");
	scanf("%d", &numero1);
	printf("Digite o 2° numero: ");
	scanf("%d", &numero2);

	soma = numero1 + numero2;
		
	printf("a soma eh: %d\n", soma);	
	if(soma % 2 == 0){
		printf("EH PAR\n");
	}else{
		printf("EH IMPAR\n");
		}

	return 0;
}
