#include <stdio.h>

int main(){
	
	float celcius, fahrenheit;

	printf("Digite o valor em celcius: ");
	scanf("%f", &celcius);

	fahrenheit = (celcius * 1.8) + 32;

	printf("em fahrenheit fica: %.1f\n", fahrenheit);

	return 0;
}