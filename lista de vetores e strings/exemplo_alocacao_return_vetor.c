#include <stdio.h>
#include <stdlib.h>

int* funcao(){
	int* v = (int*) malloc(sizeof(int)*10); //v[10]
	int i;
	for(i = 0; i < 10; i++) v[i] = i;
	return v;
}

int main(){
	
	int* x = funcao();
	
	int k;
	for(k = 0; k<10; k++) printf("%d", x[k]);
	
	free(x);
	
	return 0;
}
