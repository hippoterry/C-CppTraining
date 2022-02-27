#include <stdio.h>


int main(){
	
	int a,b,c,d,max=2147000000;
	scanf("%d %d %d",&a,&b,&c);
	if (a>b) max=a;
	else max=b;
	if (max>c) max=max;
	else c=max;
	
	d=a+b+c;
	
	 if (max<d-max) printf("yes");
	 else printf("no");
   
	
	
	
		
	return 0;
}
