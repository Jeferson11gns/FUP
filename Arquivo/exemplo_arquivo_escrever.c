#include <stdio.h>

int main(){

	FILE* arq2 = fopen("escrever.txt", "w");
	
	int x;
	scanf("%d", &x);
	fprintf(arq2, "%d", x);

	return 0;
}
