#include <stdio.h>

int ordenar(int v[], int tam){
	if(tam == 0) return 0;
	
	for(int i = 0; i < tam-1; i++){
		if(v[i+1] < v[i]){
			int aux = v[i+1];
			v[i+1] = v[i];
			v[i] = aux;
		}
	}
	int r = ordenar(v, tam-1);
}

int main(){

	int v[5] = {5,7,1,4,2}, i;
	int r = ordenar(v, 5);
	for(i = 0; i < 5; i++) printf("%d", v[i]);

	return 0;
}
