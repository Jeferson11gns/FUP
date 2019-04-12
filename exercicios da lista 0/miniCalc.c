#include <stdio.h>

int main(){

	float n1, n2, multi, div;
	int soma, sub;
	printf(" Informe um numero: ");
	scanf("%f", &n1);
	printf(" Informe um numero: ");
	scanf("%f", &n2);
	
	soma = n1 + n2;
	sub = n1 - n2;
	div = n1 / n2;
	multi = n1 * n2;

	printf("\n A soma entre o 1° termo e o 2° termo eh %d \n", soma);
	printf(" A subtracao entre o 1° termo e o 2° termo eh %d \n", sub);
	printf(" A multiplicacao entre o 1° termo e o 2° termo eh %.1f \n", multi);
	printf(" A divisao entre o 1° termo e o 2° termo eh %.1f \n", div);
	

	return 0;
}
