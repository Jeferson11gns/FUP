#include <stdio.h>

int main(){
	
	float velocidade, tempo, consumo, desempenho;
	
	scanf("%f", &velocidade);
	scanf("%f", &tempo);
	scanf("%f", &consumo);

	desempenho = ((tempo/60) * velocidade)/(consumo);
	
	printf("%.2f\n", desempenho);

	
	return 0;
}

