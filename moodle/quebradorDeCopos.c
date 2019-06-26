#include <stdio.h>

int main(){
	
	int n, i, j, z, x;
	scanf("%d", &n);
	
	x = n; 
	
	for(i = 1; i <= n; i++){
		for(j = 1; j <= n*2; j++){
			
			 if(j == x){
				for(z = 1; z <= i; z++){
					printf("%d",n);
					j++;
					if(j <= n*2-1){
						printf(".");
						j++;
					}
				}
			}else
				printf(".");
			
		}
		printf("\n");
		x--;
		
	}
	return 0;
}
