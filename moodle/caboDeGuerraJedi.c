#include <stdio.h>

int main(){

	int x, y, jedi, sith;
	
	scanf("%d", &x);
	
		
	for(int j = 0;j < x; j++){
		scanf("%d",&y);
		jedi = jedi + x;
		if(jedi > sith)
			printf("Jedi");
		else if(sith > jedi)
			printf("Sith");
		else
			printf("Empate");
	}
	
	return 0;
}
