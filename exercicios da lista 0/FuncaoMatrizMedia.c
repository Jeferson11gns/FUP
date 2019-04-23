#include <stdio.h>

float media(int m[][6], int linhas){
	int soma = 0, i, j;
	for(i = 0; i < linhas; i++){
		for(j = 0; j < 6; j++){
			soma += m[i][j];
		}	
	}
	
	return (float)soma / (float)(linhas*4);
}

int main(){
	
	int matriz[][6] = { 	{8,5,8,2}, 
				{2,2,9,6}, 
				{3, -1, 0, 54} };
	
	float result = media(matriz, 3);
	printf("%f\n", result);
	
	return 0;
}
