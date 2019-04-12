#include <stdio.h>
#include <math.h>

int main(){
	
	int x, exp;

	printf("Digite um numero: ");
	scanf("%d", &x);

	exp = pow(x,2);

	printf("o numero ao quadrado fica:%d\n ", exp);


	return 0;
}