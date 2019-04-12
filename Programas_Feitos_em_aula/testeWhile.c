#include <stdio.h>

int main(){
	
	int i = 0, x = 1;
	while(i < 10){
		printf("%d,",i);
		if(x == 2)
			printf("\n");
		
		if(x == 2)
			x = x-2;
		
		i++;
		x++;

	}

	return 0;
}