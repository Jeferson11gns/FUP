#include <stdio.h>

void imprime(int m[][4], int num_linhas){
	int i, j;
	for(i = 0; i < num_linhas;i++){
		for(j = 0; j < 4; j++){
			printf("%d   ", m[i][j]);
		}
		printf("\n");
	}

}



int main(){
	
	int num_linhas = 3;
	int num_coluna = 4;

	int m[][4] = {  {5,2,8,-1}, 
			{6,2,0,-52}, 
			{2,-1,7,8} };

	imprime(m, num_linhas);
	/*int i, j;
	for(i = 0; i < num_linhas;i++){
		for(j = 0; j < num_coluna; j++){
			printf("%d   ", m[i][j]);
		}
		printf("\n");
	}
	**/

	return 0;
}
