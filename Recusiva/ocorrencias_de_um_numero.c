#include <stdio.h>

int conta_ocorrencia(int v[], int pos, int num){
	
	if(pos == 0 && v[pos] == num) return 1;
	else if(v[pos] == num) 
		return 1 + conta_ocorrencia(v, pos-1, num);
	else 
		return 0;

}

int main(){

	int n, i, a;
	
	scanf("%d", &n);
	int v[n];
	
	for(i = 0; i < n; i++) 
		scanf("%d", &v[i]);
		
	scanf("%d", &a);
	
	printf("%d", conta_ocorrencia(v, n-1, a));
	
	return 0;
	
	return 0;
}
