#include <stdio.h>

int main(){

	int jog1, jog2, jog3, jog4, somadosdedos, cont;
	
	scanf("%d", &jog1);
	scanf("%d", &jog2);
	scanf("%d", &jog3);
	scanf("%d", &jog4);
	
	somadosdedos = jog1 + jog2 + jog3 + jog4;
	cont = somadosdedos % 4;
	
	switch(cont){
		case 1:
			printf("jog1");
			break;
		case 2:
			printf("jog2");
			break;
		case 3:
			printf("jog3");
			break;
		default:
			if(somadosdedos == 0)
				printf("nenhum");
			else if(cont == 0)
				printf("jog4");
	}
	printf("\n");
	
	return 0;
}
