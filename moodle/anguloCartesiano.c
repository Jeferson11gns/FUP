#include <stdio.h>

int main(){
	
	int a;
	scanf("%d", &a);
	if(a < 0 && a != -360)
		printf("%d", (a%360) + 360);
	else
		printf("%d", a%360);

	return 0;
}
