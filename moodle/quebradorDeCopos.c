#include <stdio.h>

int main(){

	int n, x, y;
	scanf("%d", &n);
	
	for(x = 0; x < n; x++){
		printf("\n");
		for(y = 0; y < x; y++){
			printf(".");
			for(int z =0; z < y; z++){
				printf("%d", n);
			}
			
		
		}
	
	}
	return 0;
}
