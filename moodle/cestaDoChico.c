#include <stdio.h>

int main(){
	
	int cesta, banana, manga, goiaba;
	int tempo;
	
	scanf("%d", &cesta);
	scanf("%d", &banana);
	scanf("%d", &manga);
	scanf("%d", &goiaba);
	
	tempo = ((float)(banana+manga+goiaba)/cesta);

	if((banana + manga + goiaba) % cesta == 0)
		printf("%d\n", tempo);
		else
			printf("%d\n", tempo + 1);
		
	return 0;
}

