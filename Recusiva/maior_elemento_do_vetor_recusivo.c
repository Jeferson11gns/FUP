#include <stdio.h>
//retorna maior vetor
int retorna_maior(int v[], int pos){
	
	if(pos == 0)//condicao de parada
		return v[pos];
	else{
		int maior_parcial = retorna_maior(v, pos-1);
		if(v[pos] > maior_parcial)
			return v[pos]; 
		else 
			return maior_parcial;	
	}
}
int main(){
	
	int n, i;
	
	scanf("%d", &n);
	int v[n];
	
	for(i = 0; i < n; i++) scanf("%d", &v[i]);
	
	int res = retorna_maior(v, n-1);
	printf("%d", res);
	
	return 0;
}
