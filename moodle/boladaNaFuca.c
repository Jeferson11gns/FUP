#include <stdio.h>

int main(){

	int f,t, precisao;
	char letra;
	
	scanf("%c", &letra);
	scanf("%d", &f);
	
	t = letra == 'b' ? 20 : 18;
	precisao = ((f * t) - 80) / 10;
	
	if(precisao < 150)
		printf("Fraco, nem passou");
	else if(precisao < 180)
		printf("Perfeito");
	else if(precisao >= 180 && precisao <= 210)
		printf("Satisfeito");
	else
		printf("Muito forte, bola fora");
	


	return 0;
}
