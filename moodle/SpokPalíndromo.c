#include <stdio.h>

int main(){
	
	int a,palindromo = 0, resto, quociente;
	
	scanf("%d", &a);
	quociente = a;
	
	if(a%10 < 1 ){
		printf("1");
	}else{
		while(quociente > 0){
			resto = quociente%10;
			quociente = quociente / 10;
			palindromo = palindromo * 10 + resto;
		}
		
		if(a == palindromo)
			printf("1");
		else
			printf("0");
	}
	
	
	return 0;
}
