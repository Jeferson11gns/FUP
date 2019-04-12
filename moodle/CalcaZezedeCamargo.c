#include <stdio.h>

int main(){
	
	int a,b,c,d,e, menor;
	
	scanf("%d", &a);
	scanf("%d", &b);
	scanf("%d", &c);
	scanf("%d", &d);
	scanf("%d", &e);
	
	
	if(a < b && a < c && a < d && a < e)
		menor = a;
	else if((b < a && b < c && b < d && b < e))
		menor = b;
	else if((c < a && c < b && c < d && c < e) || c == b)
		menor = c;
	else if((d < a && d < c && d < b && d < e) || d == c)
		menor = d;
	else if((e < a && e < c && e < b && e < d) || e == d)
		menor = e;
	
	printf("%d", menor);
	
	
	return 0;
}
