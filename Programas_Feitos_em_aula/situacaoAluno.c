#include <stdio.h>

int main(){

	float nota1, nota2, media;
	
	printf("Digite a 1° nota: ");
	scanf("%f", &nota1);
	printf("Digite a 2° nota: ");
	scanf("%f", &nota2);

	media = (nota1 + nota2)/2;

	if(media >= 7){
		printf("APROVADO com media igual: %.1f\n", media);
	}else{
		printf("REPROVADO com media igual: %.1f\n", media);		
		}

	return 0;
}
