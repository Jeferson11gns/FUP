#include <stdio.h>

int main(){
	
	int num_linhas, num_coluna, i, j;
	scanf("%d %d", &num_linhas, &num_coluna);
	
	int m[num_linhas][num_coluna];
	
	for(i = 0; i < num_linhas;i++){
		for(j = 0; j < num_coluna; j++){
			printf("digite o elemento na [%d][%d]", i+1, j+1);
			scanf("%d", &m[i][j]);
		}
	}
	

	for(i = 0; i < num_linhas;i++){
		for(j = 0; j < num_coluna; j++){
			printf("%d   ", m[i][j]);
		}
		printf("\n");
	}
	

	return 0;
}
