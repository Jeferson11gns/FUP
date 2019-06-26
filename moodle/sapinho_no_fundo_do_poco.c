#include <stdio.h>

int main(){

	int p,s,e, aterrisou=0,x=0;
	scanf("%d %d %d", &p, &s, &e);
	
	x = aterrisou + s;
	while(1){
		
		printf("%d ", aterrisou);
		
		if(x >= p){ 
			printf("saiu");
			break;
		}else printf("%d\n", x); 
		
		aterrisou = x - e;
		x = aterrisou + s;
	}

	return 0;
}
