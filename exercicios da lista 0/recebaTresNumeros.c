#include <stdio.h>

int main(){

	float x,y,z,media;

	printf("Digite um numero: ");
	scanf("%f", &x);
	printf("digite outro numero: ");
	scanf("%f", &y);
	printf("digite outro numero: ");
	scanf("%f", &z);

	media = (x + y + z)/3;

	printf("a media eh: %.1f\n", media);


	return 0;
}