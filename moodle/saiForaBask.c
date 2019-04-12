#include <stdio.h>
#include <math.h>

int main(){

	float a, b, c, x1, x2, delta;

	scanf("%f", &a);
	scanf("%f", &b);
	scanf("%f", &c);

	delta = (b*b) - 4*a*c;

	x1 = (-b + sqrt(delta))/(2*a);
	x2 = (-b - sqrt(delta))/(2*a);

	if(delta > 0){
		printf("%.2f\n", x1);
		printf("%.2f\n", x2);
	}else if(delta == 0){
		printf("%.2f\n", x1);
	}else{
		printf("nao ha raiz real\n");
	}



	return 0;
}