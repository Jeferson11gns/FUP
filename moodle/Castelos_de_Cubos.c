#include <stdio.h>

int main(){
	int n, i;
	scanf("%d", &n);
	
	for(i = 1; i < n; i++) if(i*i == n) break;
	
	if(i*i == n) printf("sim");
	else printf("nao");
	

	return 0;
}
