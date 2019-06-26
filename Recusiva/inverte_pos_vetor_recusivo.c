#include <stdio.h>

//inverte vetor
void inverte(int v[], int p1, int p2){
	if(p1 >= p2); //caso de parada
	else{
		int aux = v[p2];
		v[p2] = v[p1]; 
		v[p1] = aux;
		inverte(v, p1+1 , p2-1);
	}		
}

int main(){

	int n, i;
	
	scanf("%d", &n);
	int v[n];
	
	for(i = 0; i < n; i++) 
		scanf("%d", &v[i]);
	
	inverte(v, 0, n-1);
	
	for(i = 0; i < n; i++) 
		printf("%d ", v[i]);
	
	
	return 0;

}
