#include <stdio.h>

int main(){

	int a, b, c;
	
	scanf("%d %d %d", &a, &b, &c);
	
	if(a == b && b == c)
		printf("3");
	else if((a == b && c != a) || (b == c && b != a) || (a == c && b != a))
		printf("2");
	else if(a != b && b != c)
		printf("0");
	
	return 0;
}
