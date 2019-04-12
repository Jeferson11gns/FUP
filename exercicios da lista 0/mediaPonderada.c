#include <stdio.h>

int main(){
	
	float n1,n2,n3, media;
	int p1,p2,p3;

	printf("Digite a 1° nota: ");
	scanf("%f", &n1);
	printf("Agora o peso: ");
	scanf("%d", &p1);
	printf("Digite a 2° nota: ");
	scanf("%f", &n2);
	printf("Agora o peso: ");
	scanf("%d", &p2);
	printf("Digite a 3° nota: ");
	scanf("%f", &n3);
	printf("Agora o peso: ");
	scanf("%d", &p3);

	media = (n1*p1 + n2*p2 + n3*p3)/(p1+p2+p3);

	printf("a media poderada é: %.1f\n ", media);


	return 0;
}