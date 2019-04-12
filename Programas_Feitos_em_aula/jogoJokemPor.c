#include <stdio.h>

int main(){
	
	int jogador1, jogador2, result;
	
	printf("-----jokemPor----- \n\n");
	printf("1- pedra\n2- tesoura\n3- papel\n4- largado\n5- spoker\n");
	printf("\njogador 1 escolha: ");
	scanf("%d", &jogador1);
	printf("jogador 2 escolha: ");
	scanf("%d", &jogador2);
	
	result = ((jogador1 == 1 && jogador2 == 2) || (jogador1 == 2 && jogador2 == 3) 			|| (jogador1 ==3 && jogador2 == 1) || (jogador1 == 4 && jogador2 == 5) 			||   		(jogador1 == 4 && jogador2 == 3) || (jogador1 == 5 && 			jogador2 == 2) || 	(jogador1 == 5 && jogador2 == 1));
	
	if(jogador1 == jogador2){	
				
		printf("\n\nEMPATE");
	}else 
		if(result == 1){
		printf("\n\nJOGADOR 1 WINS");
	}else{
		printf("\n\nJOGADOR 2 WINS");
		}
	
	printf("\n------------------\n");


	return 0;
}
