#include <stdio.h>

int rol(int vetor[], int tamanho){
	if(tamanho == 0) return 0;
	
	for(int i = 0; i < tamanho - 1; i++){
		if(vetor[i + 1] < vetor[i]){
			int aux = vetor[i+1];
			vetor[i+1] = vetor[i];
			vetor[i] = aux;
		}
	
	}
	int r = rol(vetor, tamanho-1);
}

int main(){
	int tam, i;
	scanf("%d", &tam);
	int v[tam];
	
	for(i = 0; i < tam; i++) scanf("%d", &v[i]);
	int f = rol(v, tam);

	if(tam%2 == 0){
		printf("%.1f", (v[tam/2] + v[tam/2-1])/2.0);
	}else
		printf("%d", v[tam/2]);
	return 0;
}
