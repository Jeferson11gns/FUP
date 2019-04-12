#include <stdio.h>

int main(){
	
	int c = 0, m = 0, passageiro = 0;
	
	scanf("%d", &c);
	scanf("%d", &m);
	passageiro = passageiro + m;
	
	while(passageiro < (2 * c)){

		if(passageiro == 0)
			printf("vazio\n");
		else if(passageiro >= c)
			printf("lotado\n");
		else if(passageiro < c)
			printf("ainda cabe\n");
		
		scanf("%d", &m);
		passageiro = passageiro + m;
	}
	printf("hora de partir");
	

	return 0;
}
