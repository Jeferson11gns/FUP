#include <stdio.h>

int busca_valor(int v[], int pos, int a){
	
	if(v[pos] == a)//caso parada
		return pos;
	else{
		if(pos == 0) 
			return -1;
		else 
			busca_valor(v, pos-1, a);
	}
}

int main(){
	
	int n, i, a;
	
	scanf("%d", &n);
	int v[n];
	
	for(i = 0; i < n; i++) 
		scanf("%d", &v[i]);
		
	scanf("%d", &a);
	
	printf("%d", busca_valor(v, n-1, a));
	
	return 0;
}
