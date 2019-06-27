#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

#define INVALIDO INT_MIN
#define true 1
#define false 0
#define bool int

typedef struct no{
	char valor;
	struct no* prox;
} no;

typedef struct {
	int tam;
	no* fim;
	no* ini;
} lista;

no* cria_no(char x, no* prox){
	no* n = (no*) malloc(sizeof(no));
	n->valor = x;
	n->prox = prox;
	return n;
}

void destroi_no(no* n){
	if(n==NULL) return;
	destroi_no(n->prox);
	free(n);
}

lista* cria_lista(){
	lista* l = (lista*) malloc(sizeof(lista));
	l->tam = 0;
	l->ini = l -> fim = NULL;
	return l;
}

void inserir_inicio_lista(lista* l, char x){
	no* n = cria_no(x, l->ini);
	l->ini = n;
	if(l->tam == 1) l->fim = n;
	l->tam++;
}

void inserir_fim_lista(lista* l, char x){
	if(l -> tam == 0) inserir_inicio_lista(l,x);
	else{
		no* n = cria_no(x, NULL);
		if(l -> tam == 1){
			l->ini->prox = n;
			l->fim = l->ini;
		}else{
			l->fim->prox->prox = n;
			l->fim = l->fim->prox;
		}
		l->tam++;
	}
}

int remover_inicio_lista(lista* l){
	if(l->tam > 0){
		int x = l->ini->valor;
		no* r = l->ini;
		l->ini = l->ini->prox;
		l->tam--;
		free(r);
		return x;
	} 
	return INVALIDO;
}

int tamanho_lista(lista* l){
	return l->tam;
}

bool vazia_lista(lista* l){
	if(l->tam==0) return true;
	return false;
}

void destroi_lista(lista* l){
	destroi_no(l->ini);
	free(l);
}

int main(){

	lista* l = cria_lista();
	
	inserir_inicio_lista(l, 'A');
	inserir_fim_lista(l, 'a');
	inserir_fim_lista(l, 'a');
	inserir_fim_lista(l, 'a');
	inserir_fim_lista(l, 'a');
	//printf("removido: %d\n", remover_inicio_lista(l));
	
	no* x = l->ini;
	while(x != NULL){
		printf("%c ", x->valor);
		x = x->prox;
	}
	printf("\n");
	
	destroi_lista(l);
	return 0;
}
