#include <stdio.h>

int main(){

	/*
	ABERTURA DE ARQUIVO:
	1° Parametro: nome do arquivo(relativo ou absoluto)
	2° parametro: modo de abertura
		  r: read (leitura)
		  w: write (escrita)
		  a: append (escrita no final do arquivo)
		  
	
	
	*/

	//abrindo arquivo
	FILE* arq = fopen("haha.txt", "r");
	
	int x;
	int cont = 0;
	

	while(1){
		fscanf(arq, "%d", &x);
			//se entrar no if, significa que nao conseguiu ler(ou seja o arquivo acacou)
		if(feof(arq)) break;
		cont++;
		printf("%d", x);
	}
	
	//fecha o arquivo
	fclose(arq);
	printf("\nno arquivo tem %d numeros", cont);
	return 0;
}
