#include <stdio.h>
#include <stdlib.h>

int* funcao(){
	int* v = (int*) malloc(sizeof(int)*10);
	int i;
	for(i = 0; i < 10; i++) v[i] = i;
	
}
