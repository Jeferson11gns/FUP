#include <stdio.h>
#include <stdlib.h>
int main(){
/*Entrada: - hora, minuto, dia, mês e ano, um por linha.

Saída: - hh:mm dd/mm/aa, sendo hora de 0 a 11.**/
	int hora, min, dia, mes, ano;

	scanf("%d", &hora);
	scanf("%d", &min);
	scanf("%d", &dia);
	scanf("%d", &mes);
	scanf("%d", &ano);
	
	printf("%.2d:%.2d %.2d/%.2d/%.2d\n", (hora%12), min, dia, mes, (ano%100));

	return 0;
}
