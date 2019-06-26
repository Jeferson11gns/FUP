#include <stdio.h>

int main(){

	int x, i, jedi=0, sith=0;
	
	scanf("%d", &x);
	int v[x];
	
		
	for(i = 0;i < x; i++) scanf("%d",&v[i]);
	for(i = 0;i < x; i++){
			if(i <= x/2-1) jedi += v[i];
			else sith += v[i];	
	}
		
	if(jedi > sith) printf("Jedi");
	else if(sith > jedi) printf("Sith");
	else printf("Empate");

	return 0;
}
